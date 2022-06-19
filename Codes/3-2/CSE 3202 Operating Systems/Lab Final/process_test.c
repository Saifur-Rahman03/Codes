#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

char arr[26];
char c = 'a';
void *upper (void *ptr);
void *lower (void *ptr);
int main()
{
	pthread_t ptid1, ptid2;
	pthread_create(&ptid2, NULL, lower, NULL);
	pthread_create(&ptid1, NULL, upper, NULL);
	pthread_join(ptid2, NULL);
	pthread_join(ptid1, NULL);

	pthread_exit(NULL);

}

void *lower (void *ptr)
{
	printf("Inside lower:\n");
	for(int i =0; i < 26; i++) {
		arr[i] = c++;
	}
	for(int i =0; i < 26; i++) {
		printf("%c ", arr[i]);
	}
	printf("\n");

}
void *upper (void *ptr)
{
	printf("Inside upper:\n");
	for(int i = 0; i < 26; i++) {
		arr[i] -= 32;
	}
	for(int i =0; i < 26; i++) {
		printf("%c ", arr[i]);
	}
	printf("\n");
}
