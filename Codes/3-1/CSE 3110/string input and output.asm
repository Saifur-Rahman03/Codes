.DATA
VAR1 DB 100 DUP('$')    ;initialize array of size 100 which 
                        ;ends with dollar sign  


.CODE
MAIN PROC

;initialize DS
    MOV AX,@DATA
    MOV DS,AX
    
    
    MOV SI,OFFSET VAR1  ;initialize source index sending
                        ;address of var1
    
;loop for taking string input
    L1:
    MOV AH,1            ;taking character input
    INT 21H
    CMP AL,13           ;compares if enter key is pressed
    JE PROGRAMEND       ;if enter is pressed, program ends
    MOV [SI],AL         ;else sending input to source index
    INC SI              ;increment index
    JMP L1              ;and jump to l1 and continue
    
    PROGRAMEND:         ;if enter key is pressed
;go to new line         
    MOV AH,2            ;display character function
    MOV DX,0DH          ;carriage return
    INT 21H             ;execute carriage return
    MOV DX,0AH          ;line feed
    INT 21H             ;execute line feed
;print the string    
    MOV DX,OFFSET VAR1  ;sending var1 to dx
    MOV AH,9            ;displaying string function
    INT 21H             ;diplaying string
;DOS exit    
    MOV AH,4CH
    INT 21H             ;DOS exit
    
    MAIN ENDP
END MAIN