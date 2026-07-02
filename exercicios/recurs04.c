#include <stdio.h>

int somaPositivos(int vetor[], int tamanho) {
    if (tamanho == 0)
        return 0;

    if (vetor[tamanho - 1] > 0)
        return vetor[tamanho - 1] + somaPositivos(vetor, tamanho - 1);

    return somaPositivos(vetor, tamanho - 1);
}

int main() {
    int vetor[] = {5, -2, 8, -1, 3, -4};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Soma dos positivos: %d\n", somaPositivos(vetor, tamanho));

    return 0;
}