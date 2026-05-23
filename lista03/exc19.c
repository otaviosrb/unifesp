#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main(){
    srand(time(NULL));
    int v1[MAX], v2[MAX], i, j, diferentes[MAX]={0};

    printf("Vetor 1: ");
    for (i=0; i<MAX; i++){
        v1[i] = rand() % MAX;
        printf("%d ", v1[i]);
    }

    printf("\n\nVetor 2: ");
    for (i=0; i<MAX; i++){
        v2[i] = rand() % MAX;
        printf("%d ", v2[i]);
    }

    printf("\n\nElementos diferentes entre os vetores: ");
    for (i=0; i<MAX; i++){
        int encontrado = 0;

        for (j=0; j<MAX; j++){
            if (v1[i] == v2[j]){
                encontrado = 1;
                break;
            }
        }
        if (encontrado == 0){
            printf("%d ", v1[i]);
            diferentes[v1[i]] = 1;
        }
    }
}