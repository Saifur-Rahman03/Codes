#include<stdio.h>
#include<string.h>
struct customer
{
   int cid;
   double balance;
   char name[100];
};
int main()
{
   struct customer ob[100];
   struct customer temp;
   int i,j,n,o,id,na[10];
   FILE *fin,*fout;
   fin = fopen("customer.txt","r");
   fout = fopen("customers output.txt","w");

   printf("How many number of customers?\n");
   scanf("%d",&n);

   for(i=0;i<n;i++)
      fscanf(fin,"%d %s %lf",&ob[i].cid,&ob[i].name,&ob[i].balance);

      printf("1. Find the balance of specific CID\n2. Show the sorted list of customers according to balance\n3. Max balance\n4. Find name\nEnter Your opinion:");
      scanf("%d",&o);
      if(o==1){
         printf("Enter a CID\n");
         scanf("%d",&id);
         for(i=0;i<n;i++)
            if(id==ob[i].cid)
               fprintf(fout,"%d\t%s\t%lf\n",ob[i].cid,ob[i].name,ob[i].balance);
      }
      if(o==2){
         for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
               if(ob[i].balance<ob[j].balance){
                  temp=ob[i];
                  ob[i]=ob[j];
                  ob[j]=temp;
               }
            }
         }
         for(i=0;i<n;i++)
         fprintf(fout,"%d\t%s\t%lf\n",ob[i].cid,ob[i].name,ob[i].balance);
      }
      if(o==3){
         for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
               if(ob[i].balance<ob[j].balance){
                  temp=ob[i];
                  ob[i]=ob[j];
                  ob[j]=temp;
               }
            }
         }
         fprintf(fout,"%d\t%s\t%lf\n",ob[i].cid,ob[i].name,ob[i].balance);
      }
      if(o==4){
         printf("Enter name\n");
         gets(n);
         for(i=0;i<n;i++)
         if(strcmp(na,ob[i].name)==0)
            fprintf(fout,"%d\t%s\t%lf\n",ob[i].cid,ob[i].name,ob[i].balance);
         else
            printf("Invalid Name\n");
      }
      return 0;
}
