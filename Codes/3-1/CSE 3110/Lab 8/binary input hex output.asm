;program to take a 8 digit binary number as input and output the corresponding Hexadecimal number

.MODEL SMALL
.STACK 100H

.DATA 
MSG1 DB 'Enter a 8 digit binary number: $'
MSG2 DB 'Corresponding hexadecimal number: $'

.CODE
MAIN PROC
    ;initialize DS
    MOV AX, @DATA           ;get data segment
    MOV DS, AX              ;initialize DS
    
    LEA DX, MSG1            ;show first message prompt
    MOV AH, 9      
    INT 21H
    
    XOR BL, BL              ;clears BL
    
    MOV CX, 8               ;runs loop 8 times
    INPUT:                  
    MOV AH, 1               ;single character input
    INT 21H                 ;takes input into AL
    AND AL, 01H             ;mask out the right most bit
    SHL BL, 1               ;left shift to clear RSB
    OR BL, AL               ;inserts AL into BL
    LOOP INPUT
    
    MOV DL, 10              ;line feed
    MOV AH, 02H             ;move cursor next line
    INT 21H
    MOV DL, 13              ;carriage return
    MOV AH, 02H             ;move cursor to the beginning of the line
    INT 21H 
    
    LEA DX, MSG2            ;show second message prompt
    MOV AH, 9      
    INT 21H
    
    XOR AL, AL              ;clears AL
    
    MOV CX, 2               ;does operation two times
    OPERATION:
    MOV AX, BX              ;assigns BX's value to AX
    AND AX, 0F0H            ;mask out right most 4 bits
    SHR AX, 4               ;right shift bits to make one digit
    CMP AX, 0AH             ;compares if value is number or digit
    JGE PRINT_DIGIT         ;if greater than or equal print digit
    
    PRINT_NUMBER:           ;else print number
    ADD AX, 30H             ;adds 30H to print the character of the hex number
    MOV DX, AX              ;assigns AX to DX
    MOV AH, 2               ;calls character print function
    INT 21H                 ;prints character
    
    JMP DO_NOTHING
    
    PRINT_DIGIT:            ;prints digit
    ADD AX, 37H             ;adds 37H to print the character of the hex number
    MOV DX, AX              ;assigns AX to DX
    MOV AH, 2               ;calls character print function
    INT 21H                 ;prints character
    
    DO_NOTHING:
    
    SHL BX, 4               ;left shift 4 times to operate with next 4 bits
    LOOP OPERATION
    
    
    
    ;DOS exit
    MOV AH, 4CH
    INT 21H
    
    MAIN ENDP
END MAIN