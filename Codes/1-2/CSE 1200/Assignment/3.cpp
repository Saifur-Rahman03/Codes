#include <iostream>
using namespace std;
int fSS(int a[], int n);
int main() {
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int a[n-1];
	cout<<"Enter array elements: ";
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int ss = fSS(a, n);
	cout<<"Second smallest Element: "<<ss;
	return 0;
}
int fSS(int a[], int n){
	int s, ss;
	if(a[0]<a[1]){
		s = a[0];
		ss = a[1];
	}
	else {
		s = a[1];
		ss = a[0];
	}
	for(int i=0; i<n; i++) {
		if(s>a[i]) {
			ss = s;
			s = a[i];
	}
	else if(a[i] < ss){
		ss = a[i];
	}
	}
	return ss;
}
