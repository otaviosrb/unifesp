#include <stdio.h>

int main(){
    int n, soma=0, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    for (i=0; i<n; i++){
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("%d", soma);

    return 0;
}