#include<stdio.h>
int main()
struct stu
{
   char name[100];
   int roll;
   double cgpa;
};
{
   struct stu stu;
   int i,j,n;

   FILE *fdatain,*fdataout;

   fdatain = fopen("student's data input.txt","r");
   fdataout = fopen("student's data output.txt","w");

   while(fscanf(fdatain,"%d %s %lf",&stu.roll,&stu.name,&stu.cgpa) != EOF )
      fprintf(fdataout,"%d\t%s\t%.2lf\t\n",stu.roll,stu.name,stu.cgpa);

   return 0;
}
