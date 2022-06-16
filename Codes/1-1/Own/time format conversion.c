#include<stdio.h>
#include<string.h>
int main()
{
     int t1,t2,s1,s2,m1,m2;
     char arr[10];
   //char am[]="AM";
   //char pm[]="PM";
     scanf("%d %*s %d %*s %d %s",&t1,&m1,&s1,arr);

     if(arr[0]=='A'){
          if(t1==12)
               printf("00:%d:%d\n",m1,s1);
          printf("%d:%d:%d\n",t1,m1,s1);
     }



}
