#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
void date(char *p)
{
    char a[100];
    strcpy(a,p);



}
void date(int d, int m,int y)
{
    cout<<d <<m <<y;

}
int main()
{

   date("28/10/2018");
   date(28,10,2018);
   return(0);
}


