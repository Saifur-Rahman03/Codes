#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
class student
{
public:

    student();
    void show();

};
student::student()
{
    char n[20];
    int roll;
    double GPA;
    cout<<"enter name";
    cin>>n;
    cout<<"enter roll";
    cin>>roll;
    cout<<"enter GPA";
    cin>>GPA;
    cout<<"object is destroyed";
}


main()
{
    student ob;
}


