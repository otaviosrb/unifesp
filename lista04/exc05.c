#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 3

int main(){
    srand(time(NULL));
    int A[MAX][MAX] = {
        {5, 0, 0},
        {0, 2, 0},
        {0, 0, 9}
    }; 
    int i, j, soma=0;

    for (i=0; i<MAX; i++){
        soma += A[i][i];
    }

    printf("Traco da matriz: %d", soma);

    return 0;
}