#include <iostream>
using namespace std;
class Complex
{
private:
	int real;
       int imag;
public:
	Complex( );
	void read( );
	void display( );
	Complex addComplexNumbers(Complex comp2)
	{
		Complex temp;
		temp.real = real+comp2.real;
		temp.imag = imag+comp2.imag;
		return temp;
        }
};
Complex :: Complex( ): real(0), imag(0)
{ }
void Complex :: read()
{
	cout << "Enter real and imaginary number respectively:"<<endl;
	cin >> real >> imag;
}
void Complex :: display()
{
	cout << "Sum = " << real << "+" << imag << "i" << endl;
}


int main()
{
    Complex c1, c2, c3;

    c1.read();
    c2.read();

    c3 = c1.addComplexNumbers(c2);

    c3.display();

    return 0;
}
