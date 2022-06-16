#include<stdio.h>
int main()
struct stu
{
   char name[180];
   int roll;
   double cgpa;
};
{
   struct stu ob[10];
   struct stu temp;
   int i,j,n;


   FILE *fdatain,*fdataout;

   fdatain = fopen("student's data input.txt","r");
   fdataout = fopen("student's data sorted.txt","w");

   printf("Enter the number of students\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   fscanf(fdatain,"%d %s %lf",&ob[i].roll,&ob[i].name,&ob[i].cgpa);



   for(i=0;i<n-1;i++){
      for(j=i+1; j<n;j++){
         if(ob[i].cgpa>ob[j].cgpa){
            temp=ob[i];
            ob[i]=ob[j];
            ob[j]=temp;
         }
      }
   }

   for(i=0 ; i<n ; i++)
      fprintf(fdataout,"%d\t%s\t%lf\n",ob[i].roll,ob[i].name,ob[i].cgpa);

   return 0;
}

