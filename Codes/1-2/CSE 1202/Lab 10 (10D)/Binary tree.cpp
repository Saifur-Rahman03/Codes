#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *ll;
	struct node *rl;
};
struct node *h, *q, *r, *ax[100];
int n;
void create();
int main()
{
	create();

	return 0;
}
void create()
{
	FILE *fp;
	fp = fopen("Binary tree.txt", "r");
	int i, x, y, z;
	for(i = 0; i < 50; i++)
		ax[i] = new node;
	ax[0] = 0;
	for(i = 1; i < 10; i++){
		fscanf(fp, "%d %d %d", &x, &y, &z);
		//n = i;
		if(x == -1)
			break;
		ax[i]->data = y;
		ax[i]->ll = ax[x];
		ax[i]->rl = ax[z];
	}
	for(i = 1; i < 8; i++)
		printf("%X %d %X\n", ax[i]->ll, ax[i]->data, ax[i]->rl);
	for(i = 1; i < 8; i++)
		cout << "Address of " << ax[i]->data << " = " << ax[i] << endl;
	fclose(fp);
}
