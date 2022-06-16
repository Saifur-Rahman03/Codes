#include<stdio.h>
int main()
{
    int n,c,d,a[100],b[100];
    printf("Enter the number of elements in array:");
    scanf("%d",&n);

    printf("Enter the array elements:");
    for(c=1;c<=n;c++)
        scanf("%d",&a[c]);

    for(c=n,d=1;c>=1;c--,d++)
    b[d]=a[c];

    //for(c=1;c<=n;c++)
    //a[c]=b[c];

    printf("Reverse array is:");
    for(c=1;c<=n;c++)
        printf("%d",b[c]);
}
