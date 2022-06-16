# include <iostream>
# include <list>
using namespace std ;
int main ()
{
	list <char > l1 , l2;
	int i;
	for (i =0; i <10; i +=2)
		l1 . push_back ('A'+i);
	for (i =1; i <11; i +=2)
		l2 . push_back ('A'+i);
	cout << "Contents of list1: ";
	list <char >:: iterator p = l1 . begin ();
	while (p != l1 . end ()){
		cout << *p;
		p ++;
	}
	cout << endl << endl ;
	cout << "Contents of list2: ";
	p = l2 . begin ();
	while (p != l2 . end ()){
		cout << *p;
		p ++;
	}
	cout << endl << endl ;
	l1 . merge ( l2 );
	if(l2 . empty ())
		cout << "list2 is now empty \n";
	cout << "Contents of list1 after merge :\n";
	p = l1 . begin ();
	while (p != l1 . end ()){
		cout << *p;
		p ++;
	}
	return 0;
}
