#include<stdio.h>
int main()
{
   char ch[30],ch1[30],ch2[30];
   scanf("%s",ch);
   scanf("%s",ch1);
   scanf("%s",ch2);
   if(ch[0] == 'v'){
      if(ch1[0] == 'a'){
         if(ch2[0] == 'c')
            printf("aguia\n");
         else
            printf("pomba\n");
      }
      else{
         if(ch2[0] == 'o')
            printf("homem\n");
         else
            printf("vaca\n");
      }
   }

      else{
      if(ch1[0] == 'i'){
         if(ch2[2] == 'm')
            printf("pulga\n");
         else
            printf("lagarta\n");
      }
      else{
         if(ch2[0] == 'h')
            printf("sanguessuga\n");
         else
            printf("minhoca\n");
      }
   }

   return 0;
}

