.DATA   

    CR EQU 0DH
    LF EQU 0AH
VAR1 DB 100 DUP('$')    ;initializing array of size 100
                        ;and intialized all to dollar sign

    
MSG1 DB 'ENTER YOUR NAME: $' 
MSG2 DB 0DH, 0AH, 'INITIALS OF NAME IN LOWERCASE: $'

              
              
.CODE
MAIN PROC 
    
;initialize DS
    MOV AX, @DATA       ;get data segment
    MOV DS, AX          ;initialize DS
                                       
    MOV SI, OFFSET VAR1 ;initialize source index at
                        ;address of VAR1
;print user prompt
    LEA DX, MSG1        ;get first message
    MOV AH, 9           ;display string function    
    INT 21H             ;display string

;input and store the first character                                                       
    MOV AH, 1           ;read character function
    INT 21H             ;read first character
    ADD AL, 20H         ;convert it to lowercase
    MOV [SI], AL        ;send it to source index
    INC SI              ;increment index                                      

;string input using loop
    PBEGIN:             ;starting of loop
    MOV AH, 1           ;read chatacter function
    INT 21H             ;read a character into AL  
    
     
    CMP AL, 13          ;checks if enter key is pressed
    JE PEND             ;then jumps to PEND
    
    CMP AL, 32          ;checks if space key is pressed
    JE ASSIGN           ;jumps to ASSIGN
    JMP PBEGIN          ;jump to PBEGIN to continue loop 

;store the character after space    
    ASSIGN:             
    MOV AH, 1           ;read character function
    INT 21H             ;read character after space
    ADD AL, 20H         ;convert it to lowercase
    MOV [SI], AL        ;send input to source index
    INC SI              ;increment index
    JMP PBEGIN          ;jump to PBEGIN to continue loop


;after terminating loop
    PEND:   
        
;print the string
    LEA DX, MSG2        ;get output message
    MOV AH, 9           ;displaying string function
    INT 21H             ;diplaying string          
                                      
    MOV AH,2            ;display character function
    MOV DX, 0DH         ;carriage return
    INT 21H             ;execute carriage return
    MOV DX, 0AH         ;line feed
    INT 21H             ;execute line feed        
    
    MOV SI, OFFSET VAR1 ;initialize source index at
                        ;address of VAR1
;loop for printing output    
    L1:
    
    MOV DX, [SI]        ;assigning value of SI
    MOV AH, 2           ;display character function
    INT 21H             ;displaying characer
    INC SI              ;increment source index
    CMP [SI],'$'        ;checks if the array ended
                        ;value is dollar sign
    JE EXIT             ;jumps out of loop to EXIT
   
    
    MOV AH,2            ;display character function
    MOV DX, 0DH         ;carriage return
    INT 21H             ;execute carriage return
    MOV DX, 0AH         ;line feed
    INT 21H             ;execute line feed        
    
    JMP L1
    
    EXIT:

;DOS exit
    MOV AH, 4CH
    INT 21H
    
    MAIN ENDP
END MAIN