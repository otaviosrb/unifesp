// 7. Escreva um algoritmo para calcular o valor aproximado de pi com base na série de Leibniz:
// pi = 4 . (1 - 1/3 + 1/5 - 1/7 + 1/9 - ...)
// O algoritmo deve solicitar ao usuário o número de termos N a serem utilizados na somatória
// e exibir o valor aproximado de pi calculado.

#include <stdio.h>

int main() {
    int n, i;
    double soma = 0.0;

    printf("Digite o número de termos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int denominador = 2 * i + 1;

        if (i % 2 == 0)
            soma += 1.0 / denominador;
        else
            soma -= 1.0 / denominador;
    }

    double pi = 4 * soma;

    printf("Valor aproximado de pi: %.6lf\n", pi);

    return 0;
}