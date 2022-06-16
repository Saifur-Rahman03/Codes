#include<stdio.h>
int main ()
{
    int i,marks[60],n,s;
    s=0;
    printf("Enter the number of students:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter the marks of student %d:",i);
        scanf("%d",&marks[i]);
        s+=marks[i];
    }
    printf("Sum= %d",s);
}
