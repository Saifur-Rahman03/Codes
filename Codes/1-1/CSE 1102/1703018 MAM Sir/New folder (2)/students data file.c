#include<stdio.h>
struct stu
{
   char name[10];
   int roll;
   double cgpa;
};
int main()
{
   struct stu stu[10];
   struct stu temp;
   int i,j,n;
   FILE *fin,*fout;
   fin=fopen("stu data in.txt","r");
   fout=fopen("stu data out.txt","w");

   printf("how many students?\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   fscanf(fin,"%d %s %lf",&stu[i].roll,&stu[i].name,&stu[i].cgpa);

   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(stu[i].cgpa<stu[j].cgpa){
            temp=stu[i];
            stu[i]=stu[j];
            stu[j]=temp;
         }
      }
   }
   for(i=0;i<n;i++)
      fprintf(fout,"%d\t%s\t%.2lf\n",stu[i].roll,stu[i].name,stu[i].cgpa);
   return 0;
}
