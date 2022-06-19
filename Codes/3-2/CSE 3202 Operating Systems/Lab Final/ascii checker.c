#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int main()
{
	char arr[26];
	char c = 'a';
	for(int i =0; i < 26; i++) {
		arr[i] = c++;
	}
	for(int i =0; i < 26; i++) {
		printf("%c ", arr[i]);
	}
	for(int i =0; i < 26; i++) {
		printf("%c ", arr[i] - 32);
	}
}
