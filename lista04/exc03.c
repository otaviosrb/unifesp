#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 3

int main(){
    srand(time(NULL));
    int A[MAX][MAX]; 
    int T[MAX][MAX];
    int i, j;

    for (i=0; i<MAX; i++){
        for (j=0; j<MAX; j++){
            A[i][j] = rand() % 10;
        }
    }

    for (i=0; i<MAX; i++){
        for (j=0; j<MAX; j++){
            T[j][i] = A[i][j];
        }
    }

    printf("Matriz Original A: \n");
    for (i=0; i<MAX; i++){
        for (j=0; j<MAX; j++){
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Matriz Transposta T: \n");
    for (i=0; i<MAX; i++){
        for (j=0; j<MAX; j++){
            printf("%2d ", T[i][j]); 
        }
        printf("\n");
    }

    return 0;
}