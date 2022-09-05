#include<bits/stdc++.h>
#include<fstream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    ofstream quick1,quick2,quick3,quick4,quick5,quick6,quick7,quick8,quick9,quick10;
    quick1.open("quick1.txt");
    quick2.open("quick2.txt");
    quick3.open("quick3.txt");
    quick4.open("quick4.txt");

    quick5.open("quick5.txt");
     quick6.open("quick6.txt");
      quick7.open("quick7.txt");
       quick8.open("quick8.txt");
        quick9.open("quick9.txt");
         quick10.open("quick10.txt");
    srand(time(0));
    for(int i=0;i<4000;i++)
    {
        quick1<<rand()<<endl;
    }
    for(int i=0;i<4500;i++)
    {
        quick2<<rand()<<endl;
    }
    for(int i=0;i<5000;i++)
    {
        quick3<<rand()<<endl;
    }
    for(int i=0;i<5500;i++)
    {
        quick4<<rand()<<endl;
    }
    for(int i=0;i<6000;i++)
    {
        quick5<<i+1<<" "<<rand()<<endl;
    }
     for(int i=0;i<6500;i++)
    {
        quick6<<i+1<<" "<<rand()<<endl;
    }
     for(int i=0;i<7000;i++)
    {
        quick7<<i+1<<" "<<rand()<<endl;
    }
     for(int i=0;i<7500;i++)
    {
        quick8<<i+1<<" "<<rand()<<endl;
    }
     for(int i=0;i<8000;i++)
    {
        quick9<<i+1<<" "<<rand()<<endl;
    }
     for(int i=0;i<8500;i++)
    {
        quick10<<i+1<<" "<<rand()<<endl;
    }

}
