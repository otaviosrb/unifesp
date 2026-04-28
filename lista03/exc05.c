#include <stdio.h>

int main(){
    int n, i, qtd_pares=0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    for (i=0; i<n; i++){
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0)
            qtd_pares++;
    }

    printf("%d", qtd_pares);

    return 0;
}