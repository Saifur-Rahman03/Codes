.686
.model flat, c
include C:\masm32\include\msvcrt.inc
includelib C:\masm32\lib\msvcrt.lib

.stack 100h
printf PROTO arg1:Ptr Byte, printlist:VARARG
scanf PROTO arg2:Ptr Byte, inputlist:VARARG

.data
input_integer_format byte "%d",0

output_msg byte "%d", 0Ah, 0

r dword ?


.code
main proc 
    
    

    ;SCAN(R10);
    INVOKE scanf, ADDR input_integer_format, ADDR r
    
    mov ebx,r

    if_stat:
    cmp ebx,40
    jge else_stat

    add ebx,10
    INVOKE printf, ADDR output_msg, ebx
    jmp exit_if 

    else_stat:
    sub ebx,10
    INVOKE printf, ADDR output_msg, ebx

    exit_if:


  

    


    
main endp
end