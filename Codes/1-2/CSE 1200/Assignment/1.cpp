 #include <iostream>
using namespace std;
void solve(float a, float b, float c, float d);
int main()
{
	float a, b, c, d;
	cout<<"For a linear equation in one variable of the form aX + b = cX + d"<<endl;

	cout<<"Enter a : ";
	cin>>a;

	cout<<"Enter b : ";
	cin>>b;

	cout<<"Enter c : ";
	cin>>c;

	cout<<"Enter d : ";
	cin>>d;

	solve(a, b, c, d);
	return 0;
}
void solve(float a, float b, float c, float d)
{
	if(a==c && b==d)
		cout<<"Infinite Solutions"<<endl;
	else if(a==c)
		cout<<"Wrong Equation: No Solution"<<endl;
	else
	{
		float X = (d-b)/(a-c);
		cout<<"Solution is X = "<<X<<endl;
	}
}
