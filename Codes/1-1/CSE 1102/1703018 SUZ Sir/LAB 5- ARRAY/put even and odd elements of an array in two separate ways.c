#include<stdio.h>
void main ()

{
      int ARR[10],OAR[10],EAR[10];
      int i,j=0,k=0,n;

      printf("Enter the size of array ARR:\n");
      scanf("%d",&n);
      printf("Enter the elements of an array:\n");

      for(i=0;i<n;i++){
        scanf("%d",&ARR[i]);
      }

      for(i=0;i<n;i++){
        if(ARR[i]%2==0){
            EAR[j]=ARR[i];
            j++;
        }
        else
        {
            OAR[k]=ARR[i];
            k++;
        }
      }

      printf("The elements of EAR are:\n");
      for(i=0;i<j;i++){
        printf("%d\n",EAR[i]);
      }

      printf("The elements of OAR are:\n");
      for(i=0;i<k;i++){
        printf("%d\n",OAR[i]);
      }

}
