#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

#define MAX 5

pthread_mutex_t forks[MAX];

void* Philosopher(void *arg) {
    int id = *(int *)arg;
    while (1) {
        printf("Philosopher %d thinking.\n", id);
        sleep(1);
        printf("Philosopher %d hungry.\n", id);
        pthread_mutex_lock(&forks[id]);
        pthread_mutex_lock(&forks[(id + 1) % MAX]);
        printf("Philosopher %d eating.\n", id);
        pthread_mutex_unlock(&forks[(id + 1) % MAX]);
        pthread_mutex_unlock(&forks[id]);
    }
    return NULL;
}

int main() {
    pthread_t threads[MAX];
    int ids[MAX];
    
    for (int i = 0; i < MAX; i++) 
        pthread_mutex_init(&forks[i], NULL);
    
    
    for (int i = 0; i < MAX; i++) {
        ids[i] = i;
        pthread_create(&threads[i], NULL, Philosopher, &ids[i]);
    }
    
    for (int i = 0; i < MAX; i++) 
        pthread_join(threads[i], NULL);
    
    
    return 0;
}
