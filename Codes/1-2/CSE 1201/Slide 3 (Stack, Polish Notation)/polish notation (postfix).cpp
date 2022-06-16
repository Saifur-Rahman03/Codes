#include <bits/stdc++.h>
#include <string>
#include <cstdlib>
using namespace std;
int stck[20];
int top = -1;
void push(int x){stck[++top] = x;}
int pop(){return stck[top--];}
int main()
{
	char exp[20];
	char *e;
	int n1, n2, n3;
	cout << "Enter the expression: ";
	scanf("%s", exp);
	e = exp;
	while(*e != '\0'){
		if(isdigit(*e)){
			int num;
			num = *e - 48;
			push(num);
		}
		else{
			n1 = pop(); n2 = pop();
			switch(*e){
				case '+': {n3 = n1 + n2; break;}
				case '-': {n3 = n1 - n2; break;}
				case '*': {n3 = n1 * n2; break;}
				case '/': {n3 = n1 / n2; break;}
			}
			push(n3);
		}
		e++;
	}
	cout << "Result of " << exp << " : " << pop() << endl;
}
