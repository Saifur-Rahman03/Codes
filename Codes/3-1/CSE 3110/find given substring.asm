; find given substring

.MODEL SMALL
.STACK 100H

.DATA 
MAINST DB 'HELLOWCSERUET$'
SUBST DB 0DH, 0AH, 'EEE$'
STOP DW ?
START DW ?
SUB_LEN DW ?
YESMSG DB 0DH, 0AH, 'FOUND$'
NOMSG DB 0DH, 0AH, 'NOT FOUND$'

.CODE
MAIN PROC
    
    ;initialize DS
    MOV AX, @DATA           ;get data segment
    MOV DS, AX              ;initialize DS
    MOV ES, AX              ;initialize ES
    
    ;show both strings
                       
    LEA SI, SUBST
    MOV SUB_LEN, 3        ; SUB_LEN has substring length
    
    LEA DI, MAINST
    MOV BX, 13            ; BX has main string length
    
    CLD                     ; direction flag set to 0 (left to right movement)
    
    MOV STOP, DI            ; STOP is 0
    ADD STOP, BX            ; stop has main string's length
    
    MOV CX, SUB_LEN         ; cx has substring length
    SUB STOP, CX            ; determine stop index
    
    MOV START, DI
REPEAT:
    MOV DI, START           ; reset DI
    LEA SI, SUBST
    REPE CMPSB              ; compares characters
    JE YES                  ; subset found
    
    INC START               ;update start
    
    MOV AX, START           
    CMP AX, STOP            ; check if start <= stop
    JNLE NO                 ; no, exit
    JMP REPEAT              ; keep going
YES:
    LEA DX, YESMSG
    JMP DISPLAY
    
NO:
    LEA DX, NOMSG
    
DISPLAY:
    MOV AH, 9
    INT 21H
    
    
    
     ;DOS exit
    MOV AH, 4CH
    INT 21H
    
    MAIN ENDP
END MAIN