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
    int i, j;
    int eh_diagonal = 1;

    for (i=0; i<MAX; i++){
        for (j=0; j<MAX; j++){
            if (j!=i && A[i][j] != 0){
                eh_diagonal = 0;
                break;
            }
        }
    }

    if (eh_diagonal)
        printf("Matriz eh diagonal");
    else
        printf("Matriz nao eh diagonal");

    return 0;
}