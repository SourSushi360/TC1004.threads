#include <stdio.h>
#include <pthread.h>
int saldo;
void * holaHilo(void *thid) {
    printf("hola desde un hilo %d\n",*((int*)thid));
    pthread_exit(NULL);
}
int main (){
    pthread_t t;
    saldo = 0;
    int thid = 3;
    pthread_create(&t,NULL,
    holaHilo,&thid);
    pthread_exit(NULL);
}