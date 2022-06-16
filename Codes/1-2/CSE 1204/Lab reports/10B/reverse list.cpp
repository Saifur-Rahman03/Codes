# include <iostream>
# include <list>
using namespace std ;
int main ()
{
	list <char > l ;
	list <char > revl ;
	int i;
	for (i =0; i <10; i ++)
		l . push_back ('N'+i);
	cout << "Size of list = " << l . size () << endl ;
	cout << "Original contents : ";
	list <char >:: iterator p;
	while (! l . empty ()){
		p = l . begin ();
		cout << *p;
		l . pop_front ();
		revl . push_front (*p);
	}
	cout << endl << endl ;
	cout << "Size of reversed list = ";
	cout << revl . size () << endl;
	cout << "Reversed contents : ";
	p = revl . begin ();
	while (p != revl . end ()){
		cout << *p;
		p ++;
	}
	return 0;
}
