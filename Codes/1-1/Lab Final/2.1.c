#include<stdio.h>
#include<string.h>
struct customer
{
   int id;
   int account_number;
   char name[10];
   double balance;
   double loan_issued;
};

int main()
{
   struct customer ob[100];
   struct customer temp;
   double bl,sum=0;
   char nm[10];
   int cid;
   double li=0;
   int i,j,n,o;

   FILE *fin,*fout;
   fin = fopen("customer.txt","r");
   fout = fopen("customer's output.txt","w");

   printf("Enter the number of customer\n");
   scanf("%d",&n);

   for(i=0;i<n;i++)
   fscanf(fin,"%d %d %s %lf %lf",&ob[i].id,&ob[i].account_number,ob[i].name,&ob[i].balance,&ob[i].loan_issued);

   printf("Choose an option\n1. Find out the balance of a customer with a given id\n2. Find out the name of a customer with a given id\n3. Find out the total money deposited from the balance of all customer\n4. Find out the name of customer with highest loan issued\n\nEnter your option: ");
   scanf("%d",&o);

   if(o==1){
      printf("Enter Customer id: ");
      scanf("%d",&cid);
      for(i=0;i<n;i++)
         if(cid==ob[i].id)
            fprintf(fout,"Balance = %.2lf\n",ob[i].balance);

   }

   if(o==2){
      printf("Enter Customer id: ");
      scanf("%d",&cid);
      for(i=0;i<n;i++)
         if(cid==ob[i].id)
             fprintf(fout,"Name: %s\n",ob[i].name);
   }

   if(o==3){
      for(i=0;i<n;i++)
         sum+=ob[i].balance;
      fprintf(fout,"Total money deposited = %.2lf\n",sum);
   }

   if(o==4){
      for(i=0;i<n-1;i++){
         for(j=i+1;j<n;j++){
            if(ob[i].loan_issued<ob[j].loan_issued){
               temp=ob[i];
               ob[i]=ob[j];
               ob[j]=temp;
            }
         }
      }

      //for(i=0;i<n;i++)
      fprintf(fout,"%s\t%.2lf\n",ob[0].name,ob[0].loan_issued);
   }

   return 0;
}
