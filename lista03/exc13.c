#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main(){
    srand(time(NULL));
    int v[MAX], i, nAntes, nNovo;

    printf("Vetor Inicial:\n");
    for (i=0; i<MAX; i++){
        v[i] = rand() % MAX+1;
        printf("%d ", v[i]);
    }

    printf("\n\nDigite o valor que deseja retirar e o novo valor: ");
    scanf("%d %d", &nAntes, &nNovo);

    for (i=0; i<MAX; i++){
        if (v[i] == nAntes)
            v[i] = nNovo;
    }

    printf("\nNovo Vetor:\n");
    for (i=0; i<MAX; i++)
        printf("%d ", v[i]);
}