#include<stdio.h>
int main()
{
   char ch;
   printf("Enter your character: ");
   scanf("%c",&ch);
   printf("\n");

   switch(ch){

   case 'a' :
   case 'e' :
   case 'i' :
   case 'o' :
   case 'u' :
   case 'A' :
   case 'E' :
   case 'I' :
   case 'O' :
   case 'U' : printf("%c is a vowel\n",ch);break;

   default : printf("%c is a consonant\n",ch);break;
   }

   return 0;
}
