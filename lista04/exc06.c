#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 3

int main(){
    srand(time(NULL));
    int A[MAX][MAX];
    int i, j, qtdZero=0, qtdTermos=MAX*MAX;

    for (i=0; i<MAX; i++){
        for (j=0; j<MAX; j++){
            A[i][j] = rand() % 2;
        }
    }

    for (i=0; i<MAX; i++){
        for (j=0; j<MAX; j++){
            if (A[i][j] == 0)
                qtdZero++;
        }
    }

    if (qtdZero > qtdTermos / 2)
        printf("Matriz eh esparsa");
    else 
        printf("Matriz nao eh esparsa");

    return 0;
}
