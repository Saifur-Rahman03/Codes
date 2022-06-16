;counting the number of 1 bits in a character's corresponding ASCII Code

.MODEL SMALL 
.STACK 100H

.DATA
MSG1 DB 'Enter a character: $' 
MSG2 DB 'Number of 1 bits in ASCII code: $'

.CODE
MAIN PROC
    
    ;initialize DS
    MOV AX, @DATA       ;get data segment
    MOV DS, AX          ;initialize DS
    
    LEA DX, MSG1        ;show first message prompt
    MOV AH, 9      
    INT 21H
    
    MOV AH, 1           ;single character input
    INT 21H             ;takes input into AL
    
    MOV BL, 30H         ;store ASCII value of 0 to BL
    MOV CX, 8           ;run loop 8 times
    
    counter:
    
    SHL AL, 1           ;left shift MSB to carry flag
    JC is_one           ;if carry set to 1 jump to is_one
    
    is_zero:
    JMP do_nothing      ;if carry set to zero do nothing
    
    is_one:
    ADD BL, 01H          ;add 1 to BL and store it into BL
    
    do_nothing:
    
    LOOP counter        ;run this operation again
    
    MOV DL, 10          ;line feed
    MOV AH, 02H         ;move cursor next line
    INT 21H
    MOV DL, 13          ;carriage return
    MOV AH, 02H         ;move cursor to the beginning of the line
    INT 21H
    
    LEA DX, MSG2        ;show second message prompt
    MOV AH, 9      
    INT 21H

    MOV DL, BL          ;print the value of BL
    MOV AH, 2
    INT 21H
    
    ;DOS exit
    MOV AH, 4CH
    INT 21H
    
    MAIN ENDP
END MAIN