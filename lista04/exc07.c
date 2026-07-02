#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 3

int main(){
    srand(time(NULL));
    int A[MAX][MAX] = {
        {5, 3, 8},
        {9, 2, 7},
        {4, 0, 1}
    }; 
    int ARot[MAX][MAX];
    int i, j;

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            ARot[j][MAX - 1 - i] = A[i][j];
        }
    }

    printf("\nMatriz rotacionada 90 graus:\n");
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            printf("%d ", ARot[i][j]);
        }
        printf("\n");
    }

    return 0;
}