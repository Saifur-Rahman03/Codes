#include<stdio.h>
int main()

{
   int n,d1,d2,d,h1,h2,h,m1,m2,m,s1,s2,s;
   scanf("%*s %d ",&d1);
   scanf("%d %*s %d %*s %d",&h1,&m1,&s1);
   scanf("%*s %d",&d2);
   scanf("%d %*s %d %*s %d",&h2,&m2,&s2);

   d1 = s1 + (m1*60) + (h1*(60*60)) + (d1*(24*60*60));
   d2 = s2 + (m2*60) + (h2*(60*60)) + (d2*(24*60*60));
   n=(d2-d1);
   d=n/86400;
   n%=86400;
   h = n/3600;
   n%=3600;
   m = n/60;
   s=n%60;

   printf("%d dia(s)\n",d);
   printf("%d hora(s)\n",h);
   printf("%d minuto(s)\n",m);
   printf("%d segundo(s)\n",s);
   return 0;
}
