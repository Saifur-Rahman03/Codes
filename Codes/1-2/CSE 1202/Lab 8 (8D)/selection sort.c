#include<stdio.h>
int main()
{
    int a[1000],i,j,key,n,temp,k;
    printf("Enter how many elements are there in the array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }




    for(i=0;i<(n-1);i++)
    {
        k=i;
        printf("i=%d\nk=%d\n",i,k);
        for(j=i+1;j<n;j++)
        {
            if(a[k]>a[j])
            {
                k=j;
            }
            printf("j=%d\n",j);
            printf("a[j]=%d\n",a[j]);
            printf("a[k]=%d\n",a[k]);

        }

        if(k!=i)
        {
            temp=a[i];
            a[i]=a[k];
            a[k]=temp;
            printf("a[k]=%d\n",a[k]);
        }
        printf("a[k]=%d\n\n\n",a[k]);
    }
    printf("The sorted array is:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);

    }
}
