#include<stdio.h>
#include<string.h>
int main()
{
     int n,k,i,j;
     char s[100];
     scanf("%d %d",&n,&k);
     scanf("%s",s);

     for(i=0,j=0;s[i]!='\0';i++){
          if(s[i]!='a')
               s[j]=s[i];
                    j++;

     }
}
