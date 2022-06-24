; hexadecimal input/output

.MODEL SMALL
.STACK 100H

.DATA 
MSG1 DB 'Enter a hexadecimal character: $'
MSG2 DB 'Input was: $'

.CODE
MAIN PROC
    
    ;initialize DS
    MOV AX, @DATA           ;get data segment
    MOV DS, AX              ;initialize DS
    
    LEA DX, MSG1            ;show first message prompt
    MOV AH, 9      
    INT 21H

    XOR BX, BX              ; clear bx
    MOV CX, 4               ; runs loop 4 times
    
    MY_INPUT:
        MOV AH, 1           ; single character input
        INT 21H
        
        CMP AL, 39H         ; if hex input is a letter
        JG LETTER
        
        NUMBER:             ; if hex input is a number
            AND AL, 0FH     ; mask out last 4 bits
            JMP SHIFTER
        
        
        
        LETTER:
            SUB AL, 37H
            JMP SHIFTER
            
        SHIFTER:
            SHL BX, 4       ; clear out last 4 bit
            OR BL, AL       ; set AL to last 4 bit of BX
            
    LOOP MY_INPUT
    
    
    
    ;DOS exit
    MOV AH, 4CH
    INT 21H
    
    MAIN ENDP
END MAIN