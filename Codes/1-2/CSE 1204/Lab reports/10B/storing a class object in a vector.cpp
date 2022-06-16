# include <iostream>
# include <vector>
using namespace std ;
class D
{
	double d;
public :
	D () { d = 0.0; }
	D ( double x) { d = x; }
	D & operator =( double x)
	{
		d = x;
		return * this ;
	}
		double getd () { return d; }
};
bool operator <( D a, D b)
{
	return a. getd () < b. getd ();
}
bool operator ==( D a, D b)
{
	return a. getd () == b. getd ();
}
int main ()
{
	vector <D > v;
	int i;
	for (i =0; i <10; i ++)
		v. push_back ( D (i * 3.0) );
	for (i =0; i<v. size (); i++)
		cout << v[i]. getd () << " ";
	cout << endl ;
	for (i =0; i<v. size (); i++)
		v[i] = v[i]. getd () * 2.1;
	for (i =0; i<v. size (); i++)
		cout << v[i]. getd () << " ";
	return 0;
}
