#include<stdio.h>
int l,m,h,l1,l2,i,b[8];
int a[8]={2,8,6,3,1,5,9,4};
void merging(int l,int m,int h)
{
    l1=l;

    l2=m+1;

    for(i=l;((l1<=m)&&(l2<=h));i++)
    {

        if(a[l1]<=a[l2])
        {
            b[i]=a[l1];
            l1=l1+1;

        }
        else
        {
            b[i]=a[l2];
            l2=l2+1;

        }
    }
    while(l1<=m)
    {
      b[i]=a[l1];
      l1++;
      i++;

    }
    while(l2<=h)
    {
        b[i]=a[l2];
        l2++;
        i++;
    }
    for(i=l;i<=h;i++)
    {
        a[i]=b[i];

    }
    printf("\n**l=%d m=%d h=%d l1=%d l2=%d i=%d",l,m,h,l1,l2,i);
    for(i=l;i<=h;i++)
    {
        printf("   %d ",a[i]);
    }
    printf("**\n");

}
void sort(int l,int h)
{

    int m;
    if(l<h)
    {

     m=(l+h)/2;
     sort(l,m);
     sort(m+1,h);
     merging(l,m,h);
    }
    else
    {
        return;
    }


}
int main()
{
  l=0;
  h=7;
  sort(l,h);
  for(i=0;i<8;i++)
  {
      printf("%d\n",a[i]);

  }
}
