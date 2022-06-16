.MODEL SMALL
.STACK 100H

.DATA
MSG_1  DB  'Enter time in seconds up to 65535: $'
MSG_2  DB  0DH,0AH,'The time in hh:mm:ss format: $'
MSG_3  DB  ' : $'

.CODE
MAIN PROC
     MOV AX, @DATA                ;initialize DS
     MOV DS, AX
    
     LEA DX, MSG_1                ;show first message, MSG_1
     MOV AH, 9
     INT 21H
    
     CALL INDEC                   ;call the procedure INDEC
    
     PUSH AX                      ;push AX onto the STACK
    
     LEA DX, MSG_2                ;show second message, MSG_2
     MOV AH, 9
     INT 21H
    
     POP AX                       ;pop a value from STACK into AX
    
     XOR DX, DX                   ;clear DX
     MOV CX, 3600                 ;set CX=3600
     DIV CX                       ;set AX=DX:AX\CX , DX=DX:AX%CX
    
     CMP AX, 10                   ;compare AX with 10
     JGE HOURS                    ;jump to HOURS if AX>=10
    
     PUSH AX                      ;push AX onto the STACK
    
     MOV AX, 0                    ;set AX=0
     CALL OUTDEC                  ;call the procedure OUTDEC
    
     POP AX                       ;pop a value from STACK into AX
                                   
     HOURS:                       ;jump label
     CALL OUTDEC                  ;call the procedure OUTDEC
    
     MOV AX, DX                   ;set AX=DX
    
     PUSH AX                      ;push AX onto the STACK
    
     LEA DX, MSG_3                ;show separator
     MOV AH, 9
     INT 21H
    
     POP AX                       ;pop a value from STACK into AX
     XOR DX, DX                   ;clear DX
    
     MOV CX, 60                   ;set CX=60
     DIV CX                       ;set AX=DX:AX\CX , DX=DX:AX%CX
    
     CMP AX, 10                   ;compare AX with 10
     JGE MINUTES                  ;jump to MINUTES if AX>=10
    
     PUSH AX                      ;push AX onto the STACK
    
     MOV AX, 0                    ;set AX=0
     CALL OUTDEC                  ;call the procedure OUTDEC
    
     POP AX                       ;pop a value from STACK into AX
    
     MINUTES:                     ;jump label
     CALL OUTDEC                  ;call the procedure OUTDEC
    
     MOV BX, DX                   ;set BX=DX
    
     LEA DX, MSG_3                ;show separator
     MOV AH, 9
     INT 21H
    
     MOV AX, BX                   ;set AX=BX
    
     CMP AX, 10                   ;compare AX with 10 
     JGE SECONDS                  ;jump to SECONDS if AX>=10
    
     PUSH AX                      ;push AX onto the STACK 
    
     MOV AX, 0                    ;set AX=0
     CALL OUTDEC                  ;call the procedure OUTDEC
    
     POP AX                       ;pop a value from STACK into AX
    
     SECONDS:                     ;jump label
     CALL OUTDEC                  ;call the procedure OUTDEC
    
     MOV AH, 4CH                  ;return control to DOS
     INT 21H
MAIN ENDP

INDEC PROC                        ;procedure to take decimal input
    PUSH BX                       ;push BX onto the STACK
    
    XOR BX, BX                    ;clear BX
    
    INPUT:
    MOV AH, 1                     ;set input function
    INT 21H
    
    CMP AL, 0DH                   ;compare AL with CR
    JE OPERATION                  ;jump to OPERATION if equals
    AND AX, 0FH                   ;mask out righ most 4 bits
    PUSH AX                       ;push AX onto the stack
    MOV AX, 10D                   ;set AX = 10D
    MUL BX                        ;multiply BX
    POP BX                        ;pop item to BX
    ADD BX, AX                    ;ADD AX to BX
    JMP INPUT                     ;jump to input again
    
    OPERATION:
    MOV AX,BX                     ;set AX=BX
    POP BX                        ;pop item to BX
    RET                           ;return control to the calling procedure
    
INDEC ENDP

OUTDEC PROC                       ;procedure to display decimal input
    PUSH CX                       ;push CX onto the STACK
    PUSH BX                       ;push BX onto the STACK
    PUSH DX                       ;push DX onto the STACK
    
    XOR CX,CX                     ;clear CX
    MOV BX,10D                    ;set BX to 10D
    
    OPERATION2:
    XOR DX,DX                     ;clear DX
    DIV BX                        ;divide AX by BX
    PUSH DX                       ;push DX onto the STACK
    INC CX                        ;increment CX
    OR AX,AX                      ;take OR of Ax with AX
    JNE OPERATION2                ;jump to OPERATION2 to operate again
    
    MOV AH,2                      ;set output function
    
    PRINT:
    POP DX                        ;pop item to DX
    OR DL,30H                     ;convert decimal to ascii code
    INT 21H                       ;print a character
    LOOP PRINT                    ;jump to PRINT again
    
    POP DX                        ;pop item to DX
    POP BX                        ;pop item to BX
    POP CX                        ;pop item to CX
    
    RET                           ;return control to calling procedure
OUTDEC ENDP

END MAIN