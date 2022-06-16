#include <stdio.h>
#include <string.h>
#define INT_MAX 65535

int isPalindrome(char str[]);

int main()
{
	char s[INT_MAX];
	int res;
	scanf("%[^\n]%*c", &s);
	res = isPalindrome(s);
	if(res == 1) {
		printf("%s is a palindrome.\n");
	}
	else {
		printf("%s is not a palindrome.\n");
	}
}
int isPalindrome(char str[])
{
	int l = 0;
	int flag = 0;
	int h = strlen(str) - 1;

	while (h > l) {
		if (str[l++] != str[h--]) {
			flag = 0;
			return flag;
		}
	}
	flag = 1;
	return flag;
}
