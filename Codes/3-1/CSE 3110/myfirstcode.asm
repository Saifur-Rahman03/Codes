.MODEL SMALL
.STACK 100H

.CODE
MAIN PROC
        
        ;OUTPUT PRINT
        MOV AH,2
        MOV DL,'?'
        INT 21H
        
        ;INPUT A CHARACTER
        
        MOV AH,1
        INT 21H
        MOV BL,AL
        
        ;CR/LF PRINT                 
        MOV AH,2
        MOV DL,0DH
        INT 21H
        
        MOV DL,0AH
        INT 21H
        
        MOV DL,BL
        INT 21H
        
        ; DOS RETURN
        MOV AH,4CH
        INT 21H
        
        MAIN ENDP
END MAIN
        
        