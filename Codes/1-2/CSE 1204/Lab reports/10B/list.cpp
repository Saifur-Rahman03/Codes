# include <iostream>
# include <list>
using namespace std ;
int main ()
{
	list <char> l;
	int i;
	for (i =0; i <10; i ++)
		l . push_back ('A'+i);
	cout << "Size = " << l . size () << endl ;
	list <char >:: iterator p;
	cout << "Contents : ";
	while (! l . empty ()){
		p = l . begin ();
		cout << *p;
		l. pop_front ();
	}
	return 0;
}
