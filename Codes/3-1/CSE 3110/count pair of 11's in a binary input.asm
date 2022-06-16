; count pair of 11's in a binary input
.MODEL SMALL
.STACK 100H

.DATA 
MSG1 DB 'Enter a binary number: $'
MSG2 DB 0DH, 0AH, 'no of 11s: $'

.CODE
MAIN PROC
    
    ;initialize DS
    MOV AX, @DATA           ;get data segment
    MOV DS, AX              ;initialize DS
    
    LEA DX, MSG1            ;show first message prompt
    MOV AH, 9      
    INT 21H

    XOR BL, BL
    MOV CX, 8
    
    INPUT:
    MOV AH, 1
    INT 21H
    
    AND AL, 01H
    
    SHL BL, 1
    OR BL, AL
    
    LOOP INPUT
    
    LEA DX, MSG2            ;show first message prompt
    MOV AH, 9      
    INT 21H   
    
    XOR DX, DX
    
    MOV CX, 8
    
    CALC:
    
    SHR BL, 1
    JC ONE
    
    JMP DO_NOTHING
    
    ONE:
    SHR BL, 1
    JNC DO_NOTHING
    
    INC DX 
    DEC CX
    
    DO_NOTHING:
    
    LOOP CALC
    
    ADD DX, 30H
    MOV AH, 2
    INT 21H

 ;DOS exit
    MOV AH, 4CH
    INT 21H
    
    MAIN ENDP
END MAIN