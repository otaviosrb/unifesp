#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 3

int main(){
    srand(time(NULL));
    int M1[MAX][MAX], M2[MAX][MAX]; 
    int i, j;

    for (i=0; i<MAX; i++){
        for (j=0; j<MAX; j++){
            M1[i][j] = rand() % 10;
            M2[i][j] = rand() % 10;
        }
    }

    for (i=0; i<MAX; i++){
        for (j=0; j<MAX; j++){
            M1[i][j] += M2[i][j];
        }
    }

    printf("Matriz Resultante: \n");
    for (i=0; i<MAX; i++){
        for (j=0; j<MAX; j++){
            printf("%2d ", M1[i][j]);
        }
        printf("\n");
    }

    return 0;
}