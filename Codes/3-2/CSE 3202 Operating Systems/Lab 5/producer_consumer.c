#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

int n = 50;
int a[70];
void *producer(void *ptr);
void *consumer(void *ptr);

int main()
{
	int a[n];
	for(int i = 0; i < n; i++) {
		a[i] = 0;
	}
	pthread_t ptid1, ptid2;
	pthread_create(&ptid1, NULL, producer, NULL);
	pthread_create(&ptid2, NULL, consumer, NULL);
	pthread_join(ptid1, NULL);
	pthread_join(ptid1, NULL);

	for(int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("Thread ended"
           " \n");
	pthread_exit(NULL);


	return 0;
}
void *producer(void *ptr)
{

	printf("Inside producer thread\n");

	int count = 0;
	for(int i = 0; i < n; i++) {
		a[i] = rand() % 100;
		count++;
	}
	for(int i = 0; i < n; i++) {
		printf("p%d ", a[i]);
	}
	printf("\n");
	if(count == n) {
		printf("Producing completed\n");
		sleep(1);
		//wakeup(consumer);

	}
}
void *consumer(void *ptr)
{

	printf("Inside consumer thread\n");

	int count = n;
	for(int i = 0; i < n; i++) {
		a[i] = -1;
		count--;
	}
	for(int i = 0; i < n; i++) {
		printf("c%d ", a[i]);
	}
	printf("\n");
	if(count == 0) {
		printf("Consuming completed\n");
		sleep(1);
		//wakeup(producer());

	}
}
