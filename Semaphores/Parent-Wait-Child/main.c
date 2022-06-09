#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <stdio.h>
#include <semaphore.h>

sem_t s;

void *child() {
    printf("child\n");
    // sem_post(&s);
}
int main() {
    sem_init(&s, 0, 1);
    printf("parent start\n");

    // init then start child process
    pthread_t c;
    pthread_create(&c, NULL, child, NULL);

    // wait for child process
    // sem_wait(&s);
    printf("Parent end\n");
    return 0;
}