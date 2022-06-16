.MODEL SMALL
.STACK 100H
.CODE
MAIN PROC
    
    MOV AX, 07H
    MOV BX, 08H
          
    CALL MULTIPLY
    
    MOV AH, 2
    INT 21H
    
    MOV AH, 4CH
    INT 21H    
    
MAIN ENDP

MULTIPLY PROC
    XOR DX, DX
REPEAT:       
    TEST BX, 1
    JZ END_IF
    
    ADD DX, AX
    
    END_IF:
        SHL AX, 1
        SHR BX, 1
        
    JNZ REPEAT
    
    RET
MULTIPLY ENDP
    
END MAIN