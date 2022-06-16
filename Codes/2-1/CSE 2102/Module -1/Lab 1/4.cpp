/* !(p && q) && r  == (!p || !q) && !r*/
#include <iostream>
using namespace std;
int main()
{
	int p, q, r;
	cout << "p\t" << "q\t" << "r\t" << "!p\t" << "!q\t" << "!r\t" << "p && q\t"
		    << " (!p || !q)\t" <<  "!(p && q) && r\t" << "(!p || !q) && !r" << endl << endl;
	for(p =0; p < 2; p++){
		for(q = 0; q < 2; q++){
			for(r = 0; r < 2; r++){
				bool a = p && q;
				bool b = !a && r;
				bool c = (!p || !q);
				bool d = c && r;
				cout << p << "\t" << q << "\t" << r << "\t" << !p << "\t" << !q << "\t"
 					   << !r << "\t  " << a << "\t      " << c << "\t\t     " << b << "\t\t     " << d << endl;
			}
		}
	}
	cout << endl;
	cout << "!(p && q) && r  == (!p || !q) && !r" << endl;
}

