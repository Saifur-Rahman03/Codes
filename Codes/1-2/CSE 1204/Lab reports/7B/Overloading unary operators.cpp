#include<iostream>
using namespace std;
class InDe
{
	int a, b;
public:
	void accept( ){
		cout<<"Enter Two Numbers: \n";
		cin >> a;
		cin >> b;
	}
	InDe operator --( ){
		a--;
		b--;
		return *this;
	}
	InDe operator++( ){
		a++;
		b++;
		return *this;
	}
	void display( ){
		cout << "\nA: " << a;
		cout<< "\nB: " << b << endl;
	}
};
int main()
{
	InDe id;
	id.accept();
	--id;
	cout<<"\nAfter Decrementing : ";
	id.display( );
	++id;
	++id;
	cout<<"\n\nAfter Incrementing : ";
	id.display( );
	return 0;
}
