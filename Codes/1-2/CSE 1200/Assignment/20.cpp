#include<iostream>

using namespace std;

int BinarySearch(int a[], int start, int end, int item, int iter)
{
	int i, mid;
	cout<<"\niteration "<<iter+1;
	iter++;
	mid = start + (end-start+1)/2;
	if(item > a[end] || item < a[start] || mid == end)
	{
		cout<<"\nNot found";
		return iter;
	}
	else if(item == a[mid])
	{
		cout<<"\n item found at "<<mid<<" index.";
		return iter;
	}
	else if(item == a[start])
	{
		cout<<"\n item found at "<<start<<" index.";
		return iter;
	}
	else if(item == a[end])
	{
		cout<<"\n item found at "<<end<<" index.";
		return iter;
	}
	else if(item > a[mid])
		BinarySearch(a, mid, 19, item, iter);
	else
		BinarySearch(a, start, mid, item, iter);
}
int LinearSearch(int a[], int n, int item)
{
	int i;
	for(i = 0; i < n; i++)
	{
		cout<<"\niteration "<<i+1;
		if(a[i] == item)
		{
			cout<<"\n item found at "<<i<<" index.";
			return i+1;
		}
	}
	cout<<"\nNot found";
}
int main()
{
	int n, i, Biter, N, Liter, a[1000];
	cout << "Enter no. of array elements: ";
	cin >> N;
	cout << "Enter array elements:\n";
	for(int j = 0; j < N; j++)
		cin >> a[j];
	cout<<"\nEnter the element to be searched: ";
	cin>>n;
	cout<<"\n\n\t\t\tBinary Search :";
	cout<<"\n\t\t\t*************";

	Biter = BinarySearch(a, 0, 19, n, 0);

	cout<<"\n\n\t\t\tLinear Search :";
	cout<<"\n\t\t\t*************";
	Liter = LinearSearch(a, 20, n);

	if(Liter > Biter)
		cout<<"\n\nBinary search is better for this search.";
	else if(Liter < Biter)
		cout<<"\n\nLinear search is better for this search.";
	else
		cout<<"\n\nBoth are equally efficient for this search.";
	return 0;
}
