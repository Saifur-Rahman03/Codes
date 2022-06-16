;storing a binary value at a register
.MODEL SMALL
.STACK 100H

.DATA                                       
n_line DB 0AH,0DH,"$"   ;for new line
    
.CODE
MAIN PROC
    
    ;initialize DS
    MOV AX, @DATA       ;get data segment
    MOV DS, AX          ;initialize DS
    
    MOV AH, 1
    INT 21H
    MOV BL, AL
    
    LEA DX,n_line       ;lea means least effective address
    MOV AH,9
    INT 21H             ;print new line
    
    AND BL, 0FH
    
    MOV DL, BL
    MOV AH, 2
    INT 21H
    
    
    ;DOS exit
    MOV AH, 4CH
    INT 21H 

    
    MAIN ENDP
END MAIN