#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>

void *hello(void *arg){
	char *msg = "Hello";
	int i;

	for(i = 0; i < strlen(msg); i++){
		printf("%c", msg[i]);
		fflush(stdout);
		usleep(1000);
	}
	return NULL;
}

void *world(void *arg){
	char *msg = " World";
	int i;

	for(i = 0; i < strlen(msg); i++){
		printf("%c", msg[i]);
		fflush(stdout);
		usleep(1000);
	}
	return NULL;
}

int main(int argc, char *argv[]){
	pthread_t h1;
	pthread_t h2;

	pthread_create(&h1, NULL, hello, NULL);
	pthread_create(&h2, NULL, world, NULL);

	pthread_join(h1, NULL);
	pthread_join(h2, NULL);

	printf("End\n");
	return 0;
}
