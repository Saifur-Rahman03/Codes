#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	ofstream fout;
	fout.open("OTP.txt");
	int a, c, count = 0;
	long int m, x0, xN;
	a = 1999, c = 3, m = 10000000, x0 = 7;
	for(int i = 0; i < 1000; i++){
		xN = ((a * x0) + c) % m;
		if(xN > 999999 && xN < 9999999){
			count++;
			fout << "RUET-" <<  xN << "\n";
			cout << "RUET-" << xN <<  "\n";
		}
		x0 = xN;
	}
	cout << "Total OTPs: " << count << endl;
}
