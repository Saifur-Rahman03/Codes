
#include<stdio.h>
int main()

{

short short_a=5;

int normal_a=67;

unsigned unsigned_a=65u;

long long_a=57l;

printf("short_a =%hd is divided by 2 is: %d\n",short_a,short_a/2);
printf("short_a =%hd is divided by 2.0 is: %lf\n",short_a,short_a/2.0);
printf("char is  %c\n", 'normal');
printf("the size of them on my computer is:\n");
printf ("%lu,%lu%,%lu,%lu",sizeof(short_a),sizeof(normal_a),sizeof(unsigned_a),sizeof(long_a));

return 0;

}
