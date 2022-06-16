#include<stdio.h>
#include<math.h>
int main()
{
   int a;
   printf("Enter angle\n");
   scanf("%d",&a);
   printf("sin(%d) = %.2lf\n",a,sin(a*(3.1416/180)));
   return 0;
}
