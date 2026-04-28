#include <stdio.h>


int main() {
    int n, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    for (i=0; i<n; i++){
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];
    int menor = vetor[0];

    for (i=1; i<n; i++){
        if (vetor[i] > maior)
            maior = vetor[i];
        if (vetor[i] < menor)
            menor = vetor[i];
    }

    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}