#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, a[]={0, 1, 3, 4, 5}, b[]={0, 1, 81, 256, 625}, n=5, x ;
    double temp=1.0, ans=0.0;

    cout<<"Enter the values of x:"<<endl;
    cin>>x;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j==i)
            {
                continue;
            }
            else
            {
                temp*=((x-a[j])/(a[i]-a[j]));
                printf("x %d, a[i] %d, a[j] %d\, temp %lf\n", x, a[i], a[j], temp);
            }

        }
        temp*=b[i];
        ans+=temp;
        temp=1;
        //printf("i %d, j %d, temp %d\n", i, j, temp);
    }
    cout<<ans<<endl;
}
