#include <stdio.h>
#define MAX 3

int main(){
    int M[MAX][MAX], VetMaiores[MAX], VetMenores[MAX];
    int i, j, maior, menor;

    for (i = 0; i < MAX; i++)
        for (j = 0; j < MAX; j++){
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }

    for (i = 0; i < MAX; i++) {
        maior = 0;
        for (j = 1; j < MAX; j++)
            if (M[i][j] > M[i][maior])
                maior = j;
        VetMaiores[i] = M[i][maior];
    }

    for (j = 0; j < MAX; j++) {
        menor = 0;
        for (i = 1; i < MAX; i++)
            if (M[i][j] < M[menor][j])
                menor = i;
        VetMenores[j] = M[menor][j];
    }

    printf("\nMaiores elementos de cada linha:\n");
    for (i = 0; i < MAX; i++) {
        printf("Linha %d: %d\n", i, VetMaiores[i]);
    }

    printf("\nMenores elementos de cada coluna:\n");
    for (j = 0; j < MAX; j++) {
        printf("Coluna %d: %d\n", j, VetMenores[j]);
    }
    
    return 0;
}