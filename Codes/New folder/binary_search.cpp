#include <bits/stdc++.h>
using namespace std;

int iterativeCount = 0;
int recursiveCount = 0;
int binarySearchIterative(int *a, int n, int key);
int binarySearchRecursive(int *a, int l, int h, int key);

int main()
{
	int n, key;
	cin >> n;
	int a[n];
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		a[i] = rand() % 100 + 1;
	}
	sort(a, a + n);
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	cout << "Enter key: ";
	cin >> key;
	cout << "found at " << binarySearchIterative(a, n, key) << " (iterative) " << endl;
	cout << "called " << iterativeCount << " times " << endl;
	int l = 0;
	int h = n - 1;
	cout << "found at " << binarySearchRecursive(a, l, h, key) << " (recursive) " << endl;
	cout << "called " << recursiveCount << " times " << endl;
}

int binarySearchIterative(int *a, int n, int key)
{
	int l = 0;
	int h = n - 1;
	int mid;
	while(l <= h){
		iterativeCount++;
		mid = (l + h) / 2;
		if(key == a[mid])
			return mid;
		else if(key > a[mid])
			l = mid + 1;
		else
			h = mid - 1;
	}
	return -1;
}
int binarySearchRecursive(int *a, int l, int h, int key)
{

	recursiveCount++;
	if(l == h){
		if(key == a[l]){
			return l;
		}
		else
			return -1;
	}
	else if(l > h)
		return -1;
	else{
		int mid = (l + h) / 2;
		if(key == a[mid])
			return mid;
		if(key < a[mid])
			return binarySearchRecursive(a, l, mid - 1, key);
		else
			return binarySearchRecursive(a, mid + 1, h, key);
	}
}
