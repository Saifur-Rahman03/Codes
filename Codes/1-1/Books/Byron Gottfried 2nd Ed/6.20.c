#include <stdio.h>
#include <string.h>

main(){
       int count, tag;
       char line[100];

       printf("Enter a line or text below\n");
       scanf("%[^\n]", line);

       for(count = 0; line[count] != '\0'; count++){
              if((line[count] >= 'A' && line[count] < 'Z') || (line[count] >= '0' && line[count] < '9') || (line[count] >= 'a' && line[count] < 'z'))
                     putchar(line[count] + 1);
              else if(line[count] == '9')
                     putchar('0');
              else if(line[count] == 'Z')
                     putchar('A');
              else if(line[count] == 'z')
                     putchar('a');
              else
                     putchar(' ');
       }
       printf("\n");

}

