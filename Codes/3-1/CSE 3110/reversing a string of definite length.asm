; reversing a string

.MODEL SMALL
.STACK 100H

.DATA 
MSG1 DB 'Enter a string of length 5: $'
MSG2 DB 0DH, 0AH, 'reverse string is: $'

.CODE
MAIN PROC
    
    ;initialize DS
    MOV AX, @DATA           ;get data segment
    MOV DS, AX              ;initialize DS
    
    LEA DX, MSG1            ;show first message prompt
    MOV AH, 9      
    INT 21H
    
    MOV CX, 5
    
    INPUT:
    
    MOV AH, 1
    INT 21H
    
    PUSH AX
    
    LOOP INPUT
    
    LEA DX, MSG2            ;show first message prompt
    MOV AH, 9      
    INT 21H
    
    MOV CX, 5
    
    OUTPUT:
    POP DX
    
    MOV AH, 2
    INT 21H
    
    LOOP OUTPUT
    


 ;DOS exit
    MOV AH, 4CH
    INT 21H
    
    MAIN ENDP
END MAIN