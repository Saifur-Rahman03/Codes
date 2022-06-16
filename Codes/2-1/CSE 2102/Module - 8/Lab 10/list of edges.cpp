#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Number of vertices : ";
    cin>>n;
    int adjM[n+1][n+1]={0};
    cout<<"Enter elements for adjacent matrices :\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cin>>adjM[i][j];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(adjM[i][j]!=0)
            {
                if(i!=j)
                    printf("Edge(%d,%d)/(%d,%d) = %d\n",i,j,j,i,adjM[i][j]);
                else
                    printf("Edge(%d,%d) = %d\n",i,j,adjM[i][j]);
            }
            adjM[i][j] = 0;
            adjM[j][i] = 0;
        }
    }

    return 0;
}

