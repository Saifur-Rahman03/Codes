#include<iostream>
#include<string.h>
using namespace std;
int main(){
string s1("Programming");
char str;
str=s1.c_str()[5];
cout<<str<<strlen(s1.c_str());
return 0;
}
