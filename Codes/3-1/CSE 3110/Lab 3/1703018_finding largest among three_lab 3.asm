.MODEL SMALL
.STACK 100H

.DATA 
    CR EQU 0DH       ;carriage return
    LF EQU 0AH       ;line feed
    
MSG1 DB 'Enter three numbers: $'
MSG2 DB 0DH, 0AH, 'The largest number is $' 

.CODE
MAIN PROC
    
;initialize DS
    MOV AX, @DATA   ;get data segment
    MOV DS, AX      ;initialize DS
    
;print user prompt
    LEA DX, MSG1    ;get first message
    MOV AH, 9       ;display string function
    INT 21H         ;display string
    
;take three inputs
    MOV AH, 1       ;read character function
    INT 21H         ;read character
    MOV BL, AL      ;store character's ASCII value
  
    MOV AL, 32      ;get space between inputs  
    MOV AH, 2       ;display character function
    INT 21H         ;display character
    
    MOV AH, 1       ;read character function
    INT 21H         ;read character
    MOV BH, AL      ;store character's ASCII value
    
    MOV AL, 32      ;get space between inputs  
    MOV AH, 2       ;display character function
    INT 21H         ;display character
    
    MOV AH, 1       ;read character function
    INT 21H         ;read character
    MOV CL, AL      ;store character's ASCII value
    
;print second message
    LEA DX, MSG2    ;get second message
    MOV AH, 9       ;display string function
    INT 21H         ;display string 

;print output                                       
    CMP BL, BH      ;compare first two inputs
    JGE X           ;if BL is greater than or equals to BH
                    ;jump to X
                    ;else BH is greater
                    
    CMP BH, CL      ;compare last two input
    JGE Y           ;if BH is greater than or equals to CL
                    ;jump to Z
                    ;else CL is largest
                   
    MOV DL, CL      ;if it doesn't jump to X or Z then CL
                    ;is largest
    MOV AH, 2       ;display character function
    INT 21H         ;display character    
    JMP EXIT        ;exit to DOS
    
    Y:
    MOV DL, BH      ;if it jumps to Y then BH is largest
    MOV AH, 2       ;display character function
    INT 21H         ;display character    
    JMP EXIT        ;exit to DOS
    
    X:
    CMP BL, CL      ;as BL is greater than BH
                    ;compare 1st and last input
    JGE Z           ;if BL is greater than or equals to CL
                    ;jump to Z
    
    MOV DL, CL      ;else CL is largest
    MOV AH, 2       ;display character function
    INT 21H         ;display character    
    JMP EXIT        ;exit to DOS
    
    Z: 
    MOV DL, BL      ;if it jumps to Z then BL is largest
    MOV AH, 2       ;display character function
    INT 21H         ;display character    
    JMP EXIT        ;exit to DOS
    

    EXIT:
;DOS exit
    MOV AH, 4CH
    INT 21H 
        
    MAIN ENDP
END MAIN