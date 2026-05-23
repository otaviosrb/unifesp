#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 5

int main(){
    int v[MAX], i, vSoma[MAX];

    printf("Vetor Inicial:\n");
    for (i=0; i<MAX; i++){
        v[i] = rand() % MAX + 1;
        printf("%d ", v[i]);
    } 

    vSoma[0] = v[0];
    for (i=1; i<MAX; i++){
        vSoma[i] = v[i] + vSoma[i-1];
    }

    printf("\n\nNovo vetor:\n");
    for (i=0; i<MAX; i++){
        printf("%d ", vSoma[i]);
    }

    return 0;
}