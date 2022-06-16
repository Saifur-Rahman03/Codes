#include<iostream>
#include<cstring>

using namespace std;
void swap (char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void Permute(char *a, int i, int n)
{
	int j;

	if (i == n-1)
		cout<<"\n"<<a;
	else
	{
		for (j = i; j < n; j++)
		{
			swap(a[i], a[j]);
			Permute(a, i + 1, n);
			swap(a[i], a[j]);
		}
	}
}

int main()
{
	char str[21];
	int len, N, i, count = 1;

	cout << "Enter length of the string: ";
	cin >> len;
	cout << "\nEnter a string: ";
	for(i = 0; i < len; i++ )
		cin >> str[i];

	for (int i = 0; i < N; i++)
	{
		count *= (i+1);
	}

	cout<<"\nThe number of permutations possible is: "<<count;
	Permute(str, 0, len - 1);

	return 0;
}
