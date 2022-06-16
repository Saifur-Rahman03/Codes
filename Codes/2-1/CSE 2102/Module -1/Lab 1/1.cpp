#include <iostream>
using namespace std;
int main()
{
	int p, q;
	cout << "p" << "\t" << "q" << "\t" << "!p\t" << "!q\t" << "p && q"
		   << "\t" << "p || q" << "\t" << "p ^ q"
		   << "\t" << "p -> q" << "\t" << "q -> p"
		   << "\t" << "p <-> q" << endl << endl;
	for(p = 0; p <= 1; p++){
		for(q = 0; q <= 1; q++){
			bool a = p && q;
			bool b = p || q;
			bool c = p ^ q;
			bool d = !p || q;
			bool e = !q || p;
			bool f = d && e;
			cout << p << "\t" << q << "\t" << !p << "\t" << !q << "\t  " << a << "\t  "
				   << b << "\t  " << c << "\t  " << d << "\t  "
				   << e << "\t   " << f <<  endl;
		}
	}
	cout << endl;

}
