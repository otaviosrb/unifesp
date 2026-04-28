#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, n1, n2;

    printf("Digite o tamanho dos vetores 1 e 2: ");
    scanf("%d%d", &n1, &n2);

    int vetor1[n1], vetor2[n2], vetorConc[n1+n2];

    printf("Vetor 1: ");
    for (i=0; i<n1; i++){
        vetor1[i] = rand()%100 + 1;
        printf("%d ", vetor1[i]);
    }

    printf("\nVetor 2: ");
    for (i=0; i<n2; i++){
        vetor2[i] = rand()%100 + 1;
        printf("%d ", vetor2[i]);
    }

    printf("\nVetores Concatenados: ");
    for (i=0; i<(n1+n2); i++){
        if (i < n1) {
            vetorConc[i] = vetor1[i];
        }
        else {
            vetorConc[i] = vetor2[i-n1];
        }
        printf("%d ", vetorConc[i]);

    }
    return 0;
}