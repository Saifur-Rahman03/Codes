#include<stdio.h>
int main()
{
     int x,y,i,o=0;
     scanf("%d %d",&x,&y);
     for(i=1;i<=y;i++){
               printf("%d",i);
               o++;
               if(o==x){
                    printf("\n");
                    o=0;}
               else
                    printf(" ");
}
return 0;
}
