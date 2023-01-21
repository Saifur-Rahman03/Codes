;Roll no 1703018
;C = 10; 
;while(C > 0) 
;{  
;print(C); 
;C = C - 2; 
;}


.686
.model flat, c
include C:\masm32\include\msvcrt.inc
includelib C:\masm32\lib\msvcrt.lib

.stack 100h
printf PROTO arg1:Ptr Byte, printlist:VARARG
scanf PROTO arg2:Ptr Byte, inputlist:VARARG

.data
input_integer_format byte "%d",0
output_msg_format byte "%s",0
output_integer_msg_format byte "%d", 0Ah, 0
a sdword 10


.code
main proc
    mov a, 10

    LOOP_:
        
    ; INVOKE printf, ADDR output_integer_msg_format, count
        INVOKE printf, ADDR output_integer_msg_format, a
        cmp a, 0
        jle EXIT_

        mov eax, a
        sub eax, 2
        mov a, eax
        JMP LOOP_

    EXIT_:
    ret
main endp
end