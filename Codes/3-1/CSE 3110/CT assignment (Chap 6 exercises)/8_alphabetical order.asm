.MODEL SMALL
.STACK 100H

.DATA                                   
    
.CODE
MAIN PROC
    
    ;initialize DS
    MOV AX, @DATA       ; get data segment
    MOV DS, AX          ; initialize DS
    
    MOV DL, '?'         
    MOV AH, 2
    INT 21H             ; display '?'
    
    MOV AH, 1           ; single character input
    INT 21H
    MOV BL, AL          ; store input to BL
    MOV AH, 1           ; take second character input
    INT 21H 
       
    CMP AL, BL
    JL PRINT            ; if alphabetical order then print
    
    XCHG AL, BL         ; else swap them
    
    PRINT:
        MOV CL, AL      ; move AL to CL
        MOV AH,2
        MOV DL, 0AH     ; line feed
        INT 21H
        MOV DL, 0DH     ; carriage return
        INT 21H
        MOV DL,CL       ; display output
        INT 21H
        MOV DL,BL       ; diplay output
        INT 21H
        
    ;DOS exit
    MOV AH, 4CH
    INT 21H 

    
    MAIN ENDP
END MAIN