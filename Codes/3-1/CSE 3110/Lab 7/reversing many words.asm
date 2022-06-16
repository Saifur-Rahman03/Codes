;displaying the text in the same word order as entered, but with the letters in each word reversed.

.MODEL SMALL
.STACK 100H

.DATA 
MSG1 DB 'Enter some text: $'
MSG2 DB 'reversed text:$'

TXT1 DB 100 DUP('$')
TXT2 DB 100 DUP('$')


.CODE
MAIN PROC
    
    ;initialize DS
    MOV AX, @DATA           ;get data segment
    MOV DS, AX              ;initialize DS
    
    LEA DX, MSG1            ;show first message prompt
    MOV AH, 9      
    INT 21H    
    LEA SI, TXT1            ;sets SI to 1st index of TXT1
    
    INPUT:
    MOV AH, 1               ;single character input
    INT 21H                 ;takes input into AL
        
    CMP AL, 13              ;checks if input is carriage return
    JE OPERATION            ;if equals input is done, jump to OPERATION
        
    MOV [SI], AL            ;else assigns AL as the value of address SI
    INC SI                  ;increments SI
    JMP INPUT               ;jumps to take input again
    
    OPERATION:    
    MOV [SI], 20H           ;puts an extra space after text to pop properly as when a space is found the whole text is popped from stack 
    XOR AL, AL              ;clears AL
    XOR BL, BL              ;clears BL
    LEA SI, TXT1            ;sets SI to 1st index of TXT1
    LEA DI, TXT2            ;sets DI to 1st index of TXT2
        
    PUSHING:
    MOV AL, [SI]            ;assigns the value of SI to AX
    ADD SI, 1H              ;increments SI
    PUSH AX                 ;pushes AX into stack
    ADD BX, 1H              ;increments BX, BX is used to count the number of characters pushed into stack
    
    CMP AL, 20H             ;checks if BX is a space character
    JE POPING               ;if it is space, starts popping
    
    CMP AL, 24H             ;else checks if input has ended/ dollar sign is found
    JE PRINT                ;if found jump to print the output    
    JMP PUSHING             ;else start pushing again
    
    POPING:    
    POP DX                  ;pops the value of stack to DX
    DEC BX                  ;decrements BX
    MOV [DI], DX            ;assigns DX as the value of address DI
    ADD DI, 1H              ;increments DI
    CMP BX, 0H              ;if stack is empty / BX is 0
    JE PUSHING              ;go to pushing to push again
    JMP POPING              ;else jump to pop again
        
    PRINT:
    MOV [DI], 24H           ;removes the last character which was given 'space character' as extra input    
    MOV DL, 10              ;line feed
    MOV AH, 02H             ;move cursor next line
    INT 21H
    MOV DL, 13              ;carriage return
    MOV AH, 02H             ;move cursor to the beginning of the line
    INT 21H  
    
    LEA DX, MSG2            ;show second message prompt
    MOV AH, 9      
    INT 21H
    
    LEA DX, TXT2            ;sets DX to 1st index of TXT2
    MOV AH, 9               ;calls output function
    INT 21H                 ;shows output
           
           
    ;DOS exit
    MOV AH, 4CH
    INT 21H
    
    MAIN ENDP
END MAIN