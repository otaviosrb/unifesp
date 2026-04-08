// Escreva um algoritmo que receba um número inteiro N e imprima os N primeiros números
// da sequência de Fibonacci. Ao final, o algoritmo deve calcular e exibir a proporção entre o
// último e o penúltimo termo calculados (aproximação da Razão Áurea).

#include <stdio.h>

int main() {
    int n, i = 1;
    int penultimo = 0, ultimo = 1;
    int soma;

    printf("Digite um número n: ");
    scanf("%d", &n);

    while (i <= n) {
        if (i == 1)
            printf("%d ", penultimo);
        else if (i == 2)
            printf("%d ", ultimo);
        else {
            soma = penultimo + ultimo;
            printf("%d ", soma);
            penultimo = ultimo;
            ultimo = soma;
        }
        i++;
    }

    if (n > 1) {
        float proporcao = (float)ultimo/ penultimo;
        printf("\nRazão Áurea: %f", proporcao);
    }

    return 0;
}

