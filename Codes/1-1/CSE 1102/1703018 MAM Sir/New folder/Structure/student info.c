#include<stdio.h>
struct record
{
  int roll;
  char name[100];
  double cgpa;
}stu[100], temp;

int main()
{
    static struct record stu[100];
    static struct record temp;
    int i,j,n;
    double sum=0;

    printf("Enter the number of students: ");
    scanf("%d",&n);
    printf("Enter Roll no, Name, CGPA\n");
    for(i=0;i<n;i++)
        scanf("%d %s %lf",&stu[i].roll,&stu[i].name,&stu[i].cgpa);
    printf("\nCGPA less then 3\n");
    for(i=0;i<n;i++)
    {
        if(stu[i].cgpa<3.0)
            printf("Name:%s\tRoll no:%d\tCGPA:%.2lf\n",stu[i].name,stu[i].roll,stu[i].cgpa);
    }
    printf("\nCGPA greater than 3\n");
    for(i=0;i<n;i++)
    {
        if(stu[i].cgpa>3.0)
            printf("Name:%s\tRoll no:%d\tCGPA:%.2lf\n",stu[i].name,stu[i].roll,stu[i].cgpa);
    }
    printf("\n");
    printf("CGPA in Descending order\n");
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(stu[i].cgpa>stu[j].cgpa){
               temp=stu[i];
               stu[i]=stu[j];
               stu[j] = temp;
            }}}


    for(i=0;i<n;i++)
      printf("Name: %s\tRoll no: %d\tCGPA: %.2lf\n",stu[i].name,stu[i].roll,stu[i].cgpa);

   printf("\n");
   printf("CGPA in Ascending order\n");

   for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
         if(stu[i].cgpa<stu[j].cgpa){
            temp = stu[i];
            stu[i] = stu[j];
            stu[j] = temp;
         }}}


   for(i=0;i<n;i++)
      printf("Name: %s\t Roll no: %d\tCGPA: %.2lf\n",stu[i].name,stu[i].roll,stu[i].cgpa);

   printf("\nSum of all CGPA\n");
   for(i=0;i<n;i++)
      sum+=stu[i].cgpa;
   printf("%.2lf\n",sum);


   return 0;
}
