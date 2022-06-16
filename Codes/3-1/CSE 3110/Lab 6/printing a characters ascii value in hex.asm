;printing a characters ASCII value in hex

.MODEL SMALL
.STACK 100H

.DATA 
MSG1 DB 'Enter a character: $'
MSG2 DB 'Characters ASCII value in hexadecimal: $'

.CODE
MAIN PROC
    
    ;initialize DS
    MOV AX, @DATA           ;get data segment
    MOV DS, AX              ;initialize DS
    
    LEA DX, MSG1            ;show first message prompt
    MOV AH, 9      
    INT 21H
    
    MOV AH, 1           ;single character input
    INT 21H             ;takes input into AL
    
    MOV BH, AL          ;copy the value of AL to BH

    
    MOV DL, 10          ;line feed
    MOV AH, 02H         ;move cursor next line
    INT 21H
    MOV DL, 13          ;carriage return
    MOV AH, 02H         ;move cursor to the beginning of the line
    INT 21H
    
    LEA DX, MSG2        ;show second message prompt
    MOV AH, 9      
    INT 21H

    
        
    MOV CX, 2           ;run loop 2 times
    
    
    shifter:

    MOV BL, BH          ;copy the value of BH into BL
        
    AND BL, 00F0H       ;or operation to mask out left 4 values
    
    SHR BL, 4           ;shift those 4 values to right
    
    CMP BL, 09H         ;compare if output is number or letter
    JG print_letter     ;if ouput is greater than 9h jump to print_letter
    
    print_number:       ;else print_number
    ADD BL, 30H         ;converts numbers to corresponding number as a character
    
    JMP print           ;jump to print
    
    print_letter:
    ADD BL, 37H         ;converts number to corresponding character
    
    print:
    MOV DL, BL          ;print the value of BL
    MOV AH, 2           ;set output function
    INT 21H             ;print
    
    SHL BH, 4           ;left shift the value of BH 4 times
    
    
    LOOP shifter        ;loop again
    
    MOV DL, 'h'         ;print a 'H' to denote hexadeciamal
    MOV AH, 2           ;set output function
    INT 21H             ;print
    
    ;DOS exit
    MOV AH, 4CH
    INT 21H
    
    MAIN ENDP
END MAIN