#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
	ifstream in;
	ofstream out;
	out.open("out.txt", ios :: app);
	int a, b = 0;
	in.open("in.txt");
	if(in.fail()){
		cout << "Failed in\n";
		exit(1);}
	//out.open("out.txt");
	if(out.fail()){
		cout << "Failed out\n";
		exit(1);}
	while(!in.eof())
	{
		in >> a;
	}
	out << "Sum = " << a + b << endl;
	out << "fuck";

	in.close();
	out.close();
	return 0;
}
