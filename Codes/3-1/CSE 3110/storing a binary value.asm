;storing a binary value at a register
.MODEL SMALL
.STACK 100H

.DATA
MSG DB 'PL. Enter a 8 bit binary number: $'
    
.CODE
MAIN PROC
    
    ;initialize DS
    MOV AX, @DATA       ;get data segment
    MOV DS, AX          ;initialize DS
    
    XOR BL, BL          ;clear BL
    MOV CX, 8
    
    LEA DX, MSG
    MOV AH, 9
    INT 21H
    
    my_input:
    MOV AH, 1           ;single char input
    INT 21H             ;takes input into AL
    
    AND AL, 01H         ;mask out right most bit
    
    SHL BL, 1           ;clear lsb of BL before taking 
                        ;from AL
    OR BL, AL           ;take the right most bit of AL
                        ;into BL
    
    LOOP my_input
    
    MOV DL, 10          ;line feed
    MOV AH, 02H         ;move cursor next line
    INT 21H
    MOV DL, 13          ;carriage return
    MOV AH, 02H         ;move cursor to the beginning of the line
    INT 21H
                        ;show output
    MOV CX, 8           ;loop 8 times
    my_output:
    
    SHL BL, 1           ;left shift to carry flag
    JC print_y          ;if carry set to 1 jump to print_y
    
    
    print_n:            ;else 
    MOV DL, 30H         ;print 0
    MOV AH, 2
    INT 21H
    
    JMP do_nothing
    
    print_y:            
    MOV DL, 31H         ;print 1
    MOV AH, 2
    INT 21H
    
    do_nothing:
    
    LOOP my_output      
    
    ;DOS exit
    MOV AH, 4CH
    INT 21H 

    
    MAIN ENDP
END MAIN