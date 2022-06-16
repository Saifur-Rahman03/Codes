.DATA
    CR EQU 0DH
    LF EQU 0AH
MSG1 DB 'ENTER A LOWER CASE LETTER: $'

MSG2 DB 0DH,0AH,'IN UPPER CASE IT IS: '
CHAR DB ?, '$'

.CODE
MAIN PROC
    
;initialize DS
    MOV AX,@DATA    ;get data segment
    MOV DS, AX      ;initialize DS
;print user prompt
    LEA DX,MSG1     ;get first message
    MOV AH,9        ;display string function
    INT 21H         ;display string
;input a character and convert it to upper case
    MOV AH,1        ;read character function
    INT 21H         ;read a small letter into AL
    SUB AL,20H      ;convert it to upper case
    MOV CHAR,AL     ;and store it
;display on the next line
    LEA DX,MSG2     ;get second message
    MOV AH,9        ;dispay string function
    INT 21H         ;display message and upper case letter
;DOS exit
    MOV AH, 4CH
    INT 21H
MAIN ENDP
    END MAIN