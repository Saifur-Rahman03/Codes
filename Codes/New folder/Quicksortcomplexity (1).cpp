#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int Count;

int a[100000];
void Swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
    Count=Count+3;

}
int Partition(int l,int h)

{

    int pivot=a[h];
    Count++;
    int i=l-1;
    Count++;
 for(int j=l;j<=h-1;j++)
 {
     Count++;
    if(a[j]<=pivot)
    {
        Count++;
        i++;
        Count++;
        Swap(a[i],a[j]);
        Count++;

    }
 }
 Swap(a[i+1],a[h]);Count++;Count++;
 return i+1;


}

void quick_sort(int l,int h)
{
    //cout<<"qi"<<endl;

 if(l<h)
 {
     Count++;
     int p=Partition(l,h);
     quick_sort(l,p-1);
     quick_sort(p+1,h);

 }

}
int main()
{
    ifstream q1,q2,q3,q4,q5,q6,q7,q8,q9,q10;
    q1.open("quick1.txt");
    q2.open("quick2.txt");
    q3.open("quick3.txt");
    q4.open("quick4.txt");
    q5.open("quick5.txt");
    q6.open("quick6.txt");
    q7.open("quick7.txt");
    q8.open("quick8.txt");
    q9.open("quick9.txt");
    q10.open("quick10.txt");



    int i;
    for(i=0; i<4000; i++)
    {
        q1>>a[i];
       // cout<<a[i]<<endl;
    }
    Count=0;
    quick_sort(0,4000-1);
    cout<<"The count of steps for 4000 is "<<Count<<endl;
    for(i=0; i<4500; i++)
    {
        q2>>a[i];
    }
    Count=0;
    quick_sort(0,4500-1);
    cout<<"The count of steps for 4500 is "<<Count<<endl;
    for(i=0; i<5000; i++)
    {
        q3>>a[i];
    }
    Count=0;
    quick_sort(0,5000-1);
    cout<<"The count of steps for 5000 is "<<Count<<endl;
    for(i=0; i<5500; i++)
    {
        q4>>a[i];
    }
    Count=0;
    quick_sort(0,5500-1);
    cout<<"The count of steps for 5500 is "<<Count<<endl;
    for(i=0; i<6000; i++)
    {
        q5>>a[i];
    }
    Count=0;
    quick_sort(0,6000-1);
    cout<<"The count of steps for 6000 is "<<Count<<endl;
    for(i=0; i<6500; i++)
    {
        q6>>a[i];
    }
    Count=0;
    quick_sort(0,6500-1);
    cout<<"The count of steps for 6500 is "<<Count<<endl;
    for(i=0; i<7000; i++)
    {
        q7>>a[i];
    }
    Count=0;
    quick_sort(0,7000-1);
    cout<<"The count of steps for 7000 is "<<Count<<endl;
    for(i=0; i<7500; i++)
    {
        q8>>a[i];
    }
    Count=0;
    quick_sort(0,7500-1);
    cout<<"The count of steps for 7500 is "<<Count<<endl;
    for(i=0; i<8000; i++)
    {
        q9>>a[i];
    }
    Count=0;
    quick_sort(0,8000-1);
    cout<<"The count of steps for 8000 is "<<Count<<endl;
    for(i=0; i<8500; i++)
    {
        q10>>a[i];
    }
    Count=0;
    quick_sort(0,8500-1);
    cout<<"The count of steps for 8500 is "<<Count<<endl;








}


// pivot



