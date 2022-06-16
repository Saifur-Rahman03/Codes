; decimal input output

.MODEL SMALL
.STACK 100H

.DATA 
MSG1 DB 'Enter a decimal digit of length 2: $'
MSG2 DB 0DH, 0AH, 'Input was: $'

.CODE
MAIN PROC
    
    ;initialize DS
    MOV AX, @DATA           ;get data segment
    MOV DS, AX              ;initialize DS
    
    LEA DX, MSG1            ;show first message prompt
    MOV AH, 9      
    INT 21H
    
    XOR BL, BL
    
    MOV CX, 2
    INPUT:
    
    MOV AH, 1
    INT 21H
    
    AND AL, 00FH
    PUSH AX             
                        
    MOV AX, 10
    
    MUL BX              ; DX:AX = BX x AX 
    
    POP BX
    
    ADD BX, AX          ; result in BX
    LOOP INPUT

    LEA DX, MSG2            ;show second message prompt
    MOV AH, 9      
    INT 21H
    
    XOR AX, AX
    
    MOV CX, 8           ;loop 8 times
    my_output:
    
    SHL BL, 1           ;left shift to carry flag
    JC print_y          ;if carry set to 1 jump to print_y
    
    
    print_n:            ;else 
    MOV DX, 0030H         ;print 0
 
    JMP do_nothing
    
    print_y:            
    MOV DX, 0031H         ;print 1
    
    do_nothing:
    
    MOV AH, 2
    INT 21H
    
    
    LOOP my_output  
 ;DOS exit
    MOV AH, 4CH
    INT 21H
    
    MAIN ENDP
END MAIN