.MODEL SMALL
.STACK 100H
.DATA   

    CR EQU 0DH
    LF EQU 0AH
    
MSG1 DB 'ENTER THREE INITIALS OF YOUR NAME: $' 
MSG2 DB 0DH, 0AH, 'INITIALS OF NAME IN LOWERCASE: $'
MSG3 DB 0DH,0AH,'$'

              
              
.CODE
MAIN PROC 
    
;initialize DS
    MOV AX, @DATA       ;get data segment
    MOV DS, AX          ;initialize DS
                                       
;print user prompt
    LEA DX, MSG1        ;get first message
    MOV AH, 9           ;display string function    
    INT 21H             ;display string

;input and store characters                                                       
    MOV AH, 1           ;read character function
    INT 21H             ;read first initial
    ADD AL, 20H         ;convert it to lowercase
    MOV BL, AL          ;store it to BL
                                                       

    MOV AH, 1           ;read chatacter function
    INT 21H             ;read second initial  
    ADD AL, 20H         ;convert it to lowercase
    MOV BH, AL          ;store it to CL
    
    MOV AH, 1           ;read chatacter function
    INT 21H             ;read third initial  
    ADD AL, 20H         ;convert it to lowercase
    MOV CL, AL          ;store it to DL
               
;print the initials
    LEA DX, MSG2        ;get output message
    MOV AH, 9           ;displaying string function
    INT 21H             ;diplaying string          
                                      
    LEA DX, MSG3        ;get newline
    MOV AH, 9           ;display string function
    INT 21H             ;display new line
    
    MOV AH, 2           ;read character function
    MOV DL, BL          ;display the first initial
    INT 21H
    
    LEA DX, MSG3        ;get newline
    MOV AH, 9           ;display string function
    INT 21H             ;display new line
    
    MOV AH, 2           ;read character function
    MOV DL, BH          ;display the second initial
    INT 21H
    
    LEA DX, MSG3        ;get newline
    MOV AH, 9           ;display string function
    INT 21H             ;display new line
    
    MOV AH, 2           ;read character function
    MOV DL, CL          ;display the third initial
    INT 21H
    
    
;DOS exit
    MOV AH, 4CH
    INT 21H
    
    MAIN ENDP
END MAIN