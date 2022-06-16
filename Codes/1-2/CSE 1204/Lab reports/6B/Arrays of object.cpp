#include <iostream>
#include <string>
using namespace std;
class books
{
	string title;
	float price ;
public:
	void get( );
	void put( );
};
void books :: get( )
{
	cout << "Title: ";
	cin >> title;
	cout << "Price: ";
	cin >> price;
}
void books :: put( )
{
	cout << "Title: " << title << "\n";
	cout << "Price: " << price << "\n";
}
int main ( )
{
	books book[100];
	int n;
	cout << "How many books? ";
	cin >> n;
	cout << endl;
	for(int i = 0; i < n; i++){
	cout<<"Enter details of book " << (i+1) << "\n";
	book[i].get( );
	}
	for(int i = 0; i < n; i++){
	cout << "\nBook " << (i + 1) << "\n";
	book[i].put( );
	}
	return 0;
}

