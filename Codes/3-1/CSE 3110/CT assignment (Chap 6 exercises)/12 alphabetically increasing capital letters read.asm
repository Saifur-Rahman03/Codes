.MODEL SMALL
.STACK 100H
.DATA   

    CR EQU 0DH
    LF EQU 0AH

NEWLINE DB 0DH, 0AH, '$'
MSG1 DB 'ENTER A STKING OF CAPITAL LETTERS: $'
MSG2 DB 'THE LONGEST CONSECUTIVELY INCREASING STRING IS: $'


.CODE
MAIN PROC 
    
;initialize DS
    MOV AX, @DATA       ; get data segment
    MOV DS, AX          ; initialize DS
    
    LEA DX, MSG1        ; prompt first message
    MOV AH, 9
    INT 21H
    
    START:
        MOV AH, 1       ; input function
        INT 21H
        
        MOV BL, AL      ; store 1st input to BL
        MOV BH, AL      ; store 1st input to BH
        MOV DH, AL      ; store 1st input to DH
        MOV DL, 01H     ; assign 1 to DL
        MOV CL, 01H     ; assign 1 to CL (counter)
    
    INPUT:
        INT 21H         ; take input
        CMP AL, 0DH     ; check carriage return found or not
        JE END          ; jump to end if found
        INC BL          ; else increment BL
        CMP AL, BL      ; comapre if the next input is the next letter pf previous input
        JNE SWAP        ; jump if not equal to SWAP   
        INC CL          ; count how many letters are consecutive
        JMP INPUT       ; take input again
       
    SWAP:
        CMP CL, DL      ; compares if CL and DL are same
        JLE STEP_1      ; jump if less than or equal to STEP_1
        
        MOV DH, BH      ; stores 1st character of input in DH
        MOV DL, CL      ; stores how many consecutive letters were found to DL
        
    STEP_1:
        MOV BH, AL      ; stores AL to BH (reset first letter)
        MOV BL, AL      ; stores AL to BL
        MOV CL, 1       ; set CL to 1 (reset counter)
        JMP INPUT       ; jump to take input again
               
                    
    END:
        CMP CL, DL      ; compares new number of consecutive letter are with old one 
        JLE STEP_2      ; jump if less than or equal to STEP_2
        
        MOV DH, BH      ; if greaten than reset 1st character of output 
        MOV DL, CL      ; reset number of consecutive result
    
    STEP_2:
        MOV BX, DX      ; stores the old first character in BX
    
    LEA DX, NEWLINE     ; go to new line
    MOV AH, 9
    INT 21H
        
    LEA DX, MSG2        ; show message2
    MOV AH, 9
    INT 21H
    
    XOR CX, CX          ; clears CX
    MOV CL, BL          ; Store the number of consecutive letters
    
    MOV DL, BH          ; start from first letter
    MOV AH, 2
    
    PRINT:              ; print until CL is zero
        INT 21H
        INC DL          ; print next letter till it reaches number of consecutive letter
    LOOP PRINT
            
;DOS exit
    MOV AH, 4CH
    INT 21H 
        
    MAIN ENDP
END MAIN