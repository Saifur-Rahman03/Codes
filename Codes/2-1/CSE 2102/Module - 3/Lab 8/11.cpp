#include <iostream>
using namespace std;
void input(int a[], int n);
void display(int a[], int n);
int count = 0;
int main()
{
	int n, no;
	cout << "Enter the size of array: ";
	cin >> n;
	int a[n] = {0};
	while(1){
		cout << "1. insert\n2. display\n3. exit\n";
		cin >> no;
		cout << endl;
		if(no == 1)
			input(a, n);
		if(no == 2)
			display(a, n);
		if(no == 3)
			break;
	}
	return 0;
}
void input(int a[], int n)
{
	int i, k, j;
	if(count == n){
		cout << "Array Full\n";
		return;
	}
	cout << "Enter an element: ";
	cin >> k;
	for(i = 0; i < n; i++){
		j = (k + i) % n;
		if(a[j] == 0){
			a[j] = k;
			count ++;
			break;}
		}
}
void display(int a[], int n)
{
	int i;
	if(count == 0){
		cout << "Array empty\n";
		return;}
	for(i = 0; i < n; i++)
			cout <<"\na[" << i << "] -> " << a[i] << " ";
	cout << endl;
}

