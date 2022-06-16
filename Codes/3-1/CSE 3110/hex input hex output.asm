; hexadecimal input/binary output

.MODEL SMALL
.STACK 100H

.DATA 
MSG1 DB 'Enter a hexadecimal character: $'
MSG2 DB 0DH, 0AH, 'Input was: $'

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
    
    LEA DX, MSG2        ;show second message prompt
    MOV AH, 9      
    INT 21H
    
    XOR AL, AL              ;clears AL
    
    MOV CX, 4                   ;does operation four times
    
    OPERATION:
    
    MOV AX, BX              ;assigns BX's value to AX
    ROL AX, 4               ;right most 4 bits are inserted into leftmost 4 bit
    AND AX, 000FH
    CMP AX, 09H             ;compares if value is number or digit
    JG PRINT_LETTER         ;if greater than or equal print digit
    
    PRINT_NUMBER:           ;else print number
    ADD AX, 30H             ;adds 30H to print the character of the hex number
    
    JMP DO_NOTHING
    
    
    PRINT_LETTER:           ;prints digit
    ADD AX, 37H             ;adds 37H to print the character of the hex number
    
    DO_NOTHING:
    
    MOV DX, AX              ;assigns AX to DX
    MOV AH, 2               ;calls character print function
    INT 21H                 ;prints character
    
    
    SHL BX, 4               ;left shift 4 times to operate with next 4 bits
    LOOP OPERATION

    ;DOS exit
    MOV AH, 4CH
    INT 21H
    
    MAIN ENDP
END MAIN