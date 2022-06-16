.MODEL SMALL
.STACK 100H
.DATA   

    CR EQU 0DH
    LF EQU 0AH

MSG1 DB 0DH, 0AH, 'Enter the hex digit: $'
MSG2 DB 0DH, 0AH, 'In decimal it is: $'
MSG3 DB 'Do you want to do it again?  $'
MSG5 DB 'ILLEGAL CHARACTER - ENTER (0 .. 9) OR (A.. F) $'
MSG6 DB 0DH, 0AH, '$'


.CODE
MAIN PROC 
    
;initialize DS
    MOV AX, @DATA       ;get data segment
    MOV DS, AX          ;initialize DS

START:                                       
;print user prompt
    LEA DX, MSG1        ;prompt first message
    MOV AH, 9           ;display string function    
    INT 21H             ;display message

;input and store characters                                                       
    MOV AH, 1           ;read character function
    INT 21H             ;read character
    

    MOV CL, AL          ;store character's Ascii value

    CMP CL, 48D         ;if input is less than 0
    JL ILLEGAL          ;then illegal input
    
    CMP CL, 70D         ;if input is greater than F            
    JG ILLEGAL          ;then illegal input
    
    CMP CL, 57D         ;compares if input is less than
    JLE DIGIT           ;or equal to 9
        
        SUB CL, 17D         ;subtract 17 to match the ASCII value
                            ;with 0 - 5 of decimal digit
    ;print        
        LEA DX, MSG2        ;prompt second message
        MOV AH, 9           ;display string function
        INT 21H             ;display message
        
        MOV DL, 49D         ;display 1 at the first
        MOV AH, 2           ;display character function
        INT 21H             ;display character
        
        MOV DL, CL          ;display the stored character
        MOV AH, 2           ;display character function
        INT 21H             ;display character
        
        LEA DX, MSG6        ;prompt new line
        MOV AH, 9           ;display string function
        INT 21H             ;display message        
        
        LEA DX, MSG3        ;prompt second message
        MOV AH, 9           ;display string function
        INT 21H             ;display message
        
        MOV AH, 1           ;character input
        INT 21H
        CMP AL, 'Y'         ; 'Y'/ 'y' is given
        JE START            ;loop again
        CMP AL, 'y'
        JE START            ;
        JMP END
    DIGIT:
    ;print
        LEA DX, MSG2        ;prompt second message
        MOV AH, 9           ;display string function
        INT 21H             ;display message
         
        MOV DL, CL          ;display the stored character
        MOV AH, 2           ;display character function
        INT 21H             ;display character

        LEA DX, MSG6        ;prompt new line
        MOV AH, 9           ;display string function
        INT 21H             ;display message   
            
        LEA DX, MSG3        ;prompt second message
        MOV AH, 9           ;display string function
        INT 21H             ;display message
        
        MOV AH, 1           ;character input
        INT 21H
        CMP AL, 'Y'         ; 'Y'/ 'y' is given
        JE START            ;loop again
        CMP AL, 'y'
        JE START            ;
        JMP END
        
        ILLEGAL:
            LEA DX, MSG6        ;prompt new line
            MOV AH, 9           ;display string function
            INT 21H             ;display message
            
            MOV DL, CL
            MOV AH, 2           ;display character function
            INT 21H             ;display character
            
            LEA DX, MSG5        ;prompt fifth message
            MOV AH, 9           ;display string function
            INT 21H             ;display message
     
        JMP START           ;else loop continues        
        
    END:        
;DOS exit
    MOV AH, 4CH
    INT 21H 
        
    MAIN ENDP
END MAIN