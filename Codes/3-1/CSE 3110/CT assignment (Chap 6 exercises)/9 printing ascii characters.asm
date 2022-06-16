.MODEL SMALL
.STACK 100H

.DATA                                   
    
.CODE
MAIN PROC
    
    ;initialize DS
    MOV AX, @DATA       ; get data segment
    MOV DS, AX          ; initialize DS
    
    MOV BH, 0AH         ; 10 char per line counter
    MOV AH, 2           ; print function
    MOV CX, 7FH         ; 127 characters from 80h to FFh
    MOV DL, 80H         ; 1st character
    MOV BL, 80H         ; store it also to BL for reuse
    
    PRINT:
        MOV DL, BL      ; display
        INT 21H    
        DEC CX          ; decrement the value of CX
        INC DL          ; increment DL
        MOV BL, DL      ; store DL to BL for reuse
        MOV DL, 20H     ; print blank space
        INT 21H
        DEC BH          ; decrement BH
        CMP BH, 0H      ; compare if one line is fully printed
        JE NEXT_LINE    ; go to print from next line
        CMP CX, 0       ; all the letter printed
        JNE PRINT       ; if not printed, continue again
        JMP END
        
    NEXT_LINE:
        MOV BH, 10      ; start counter again
        MOV DL, 0AH     ; line feed
        INT 21H
        MOV DL, 0DH     ; carriage return
        INT 21H
        JMP PRINT       ; print again
        
    END:        
    ;DOS exit
    MOV AH, 4CH
    INT 21H 

    
    MAIN ENDP
END MAIN