#include<stdio.h>
int main()
{
     int N;
     int dd,dr;
     double r;
     scanf("%d",&N);
     while(N!=0){
          scanf("%d %d",&dd,&dr);
          if(dr == 0 )
               printf("divisao impossivel\n");
          else{
               r=(1.0*dd)/dr;
               printf("%.1lf\n",r);
          }
          N--;
     }
     return 0;
}
