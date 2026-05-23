#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int main(){
    srand(time(NULL));
    
    int original[MAX], frequencia[MAX + 1] = {0}, i;

    printf("Vetor:");
    for (i=0; i<MAX; i++){
        original[i] = rand() % (MAX + 1);
        frequencia[original[i]]++;
        printf("%d ", original[i]);
    }

    printf("\nFrequências:\n");
    for (i=0; i<=MAX; i++){
        if (frequencia[i] > 0){
            printf("%d aparaceu %dx\n", i, frequencia[i]);
        }
    }

    return 0;
}