#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 3

int main(){
    srand(time(NULL));
    int M1[MAX][MAX], M2[MAX][MAX], prod[MAX][MAX]; 
    int linha, coluna, termo;

    for (linha=0; linha<MAX; linha++){
        for (coluna=0; coluna<MAX; coluna++){
            M1[linha][coluna] = rand() % 10;
            M2[linha][coluna] = rand() % 10;
            prod[linha][coluna] = 0;
        }
    }

    for (linha=0; linha<MAX; linha++){
        for (coluna=0; coluna<MAX; coluna++){
            for (termo=0; termo<MAX; termo++){
                prod[linha][coluna] += M1[linha][termo] * M2[termo][coluna];
            }
        }
    }

    printf("Matriz Resultante: \n");
    for (linha=0; linha<MAX; linha++){
        for (coluna=0; coluna<MAX; coluna++){
            printf("%2d ", prod[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}