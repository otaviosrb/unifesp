#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main(){
    srand(time(NULL));
    int v[MAX], i, vNovo[MAX], j=0;

    printf("Vetor Inicial:\n");
    for (i=0; i<MAX; i++){
        v[i] = rand() % (6);
        printf("%d ", v[i]);
    }

    for (i=0; i<MAX; i++){
        int existencia = 0;
        for (int k=0; k<j; k++){
            if (v[i] == vNovo[k]){
                existencia = 1;
                break;
            }
        }
        if (!existencia){
            vNovo[j] = v[i];
            j++;
        }
    }

    printf("\nNovo Vetor:\n");
    for (i=0; i<j; i++){
        printf("%d ", vNovo[i]);
    }


    return 0;
}