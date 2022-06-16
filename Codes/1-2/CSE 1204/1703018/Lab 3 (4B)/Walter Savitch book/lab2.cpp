#include<bits/stdc++.h>
using namespace std;
int main()
{
    string X;
    string Y;
    int l,i,m,j,c=0;
    cin>>X;
    cin>>Y;
    l=X.length();
    m=Y.length();
for(i=0;i<=l;i++)
{
for(j=0;j<=m;j++)
{
  if((X[i]==Y[j])&&(X[i+1]=='*')){


      if(X[i-1]==Y[j+1]){cout<<"true";


      }
      else cout<<"False";

  }

    else cout<<"false";
  }

  }
  //cout<<X<<Y<<l;
}


