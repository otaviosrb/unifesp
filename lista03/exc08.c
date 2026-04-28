#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, n, j=0;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    int vetor1[n], vetor2[n], vetorInterc[n*2];

    printf("Vetor 1: ");
    for (i=0; i<n; i++){
        vetor1[i] = rand()%100 + 1;
        printf("%d ", vetor1[i]);
    }

    printf("\nVetor 2: ");
    for (i=0; i<n; i++){
        vetor2[i] = rand()%100 + 1;
        printf("%d ", vetor2[i]);
    }

    for (i=0; i<(n+n); i++){
        vetorInterc[j] = vetor1[i];
        vetorInterc[j+1] = vetor2[i];
        j += 2;
    }

    printf("\nVetores Intercalados: ");
    for (i=0; i<n*2; i++){
        printf("%d ", vetorInterc[i]);
    }
  
    return 0;
}