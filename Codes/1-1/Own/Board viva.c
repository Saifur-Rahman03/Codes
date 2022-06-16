#include<stdio.h>
int main(){
char v[10] = "RUET";
char *const p = v;
*p = "CSE";
printf("%s\n",v);
printf("%s\n",p);
}
