#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main(){
    srand(time(NULL));
    int v[MAX], i, opcao, aux;

    printf("Vetor Inicial:\n");
    for (i=0; i<MAX; i++){
        v[i] = rand() % 101;
        printf("%d ", v[i]);
    }

    printf("\n\nEscolha: 1-Direita, 2-Esquerda: ");
    scanf("%d", &opcao);

    if (opcao == 1){
        aux = v[MAX - 1];
        for (i= MAX - 1; i > 0; i--)
            v[i] = v[i-1];
        v[0] = aux;
    }
    else if (opcao == 2){
        aux = v[0];
        for (i=0; i < MAX-1; i++)
            v[i] = v[i+1];
        v[MAX-1] = aux;
    }
    else{
        printf("Opção Inválida!");
        return 0;
    }

    printf("\nVetor rotacionado:\n");
    for (i=0; i<MAX; i++){
        printf("%d ", v[i]);
    }

    return 0;
}