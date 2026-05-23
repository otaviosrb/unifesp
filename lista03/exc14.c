#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main(){
    srand(time(NULL));
    int v[MAX], i, frequencia[MAX+1]={0}, frequente=0, maiorqtd=0;

    printf("Vetor:\n");
    for (i=0; i<MAX; i++){
        v[i] = rand() % MAX+1;
        printf("%d ", v[i]);
        frequencia[v[i]]++;
    }

    for (i=1; i<=MAX; i++){
        if (frequencia[i] > maiorqtd){
            maiorqtd = frequencia[i];
            frequente = i;
        }
    }

    printf("\n\nO elemento mais frequente é %d, ele apareceu %dx", frequente, maiorqtd);

    return 0;
}