.MODEL SMALL
.STACK 100H

.DATA
    CR EQU 0DH
    LF EQU 0AH
MSG1 DB 'Enter a hex digit: $'
MSG2 DB 0DH, 0AH, 'In decimal it is: $'


.CODE
MAIN PROC
        
;initialize DS
    MOV AX, @DATA   ;get data segment
    MOV DS, AX      ;initialize DS

;print user prmopt
    LEA DX, MSG1    ;get first message
    MOV AH, 9       ;display string function
    INT 21H         ;display string

;take input     
    MOV AH, 1       ;read character function
    INT 21H         ;read character
    MOV BL, AL      ;store character's ASCII value
    SUB BL, 17D     ;subtract 17 to match the ASCII value
                    ;with 0 - 5 of decimal digit
;print it
    LEA DX, MSG2    ;get second message
    MOV AH, 9       ;display string function
    INT 21H         ;display string
    
    MOV DL, 49D     ;display 1 at the first
    MOV AH, 2       ;display character function
    INT 21H         ;display character
    
    MOV DL, BL      ;display the stored character
    MOV AH, 2       ;display character function
    INT 21H         ;display character
    
;DOS exit
    MOV AH, 4CH
    INT 21H    
            
    MAIN ENDP
END MAIN