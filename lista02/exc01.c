// Escreva um algoritmo que receba quatro números inteiros: a, b, x e y. O algoritmo deve
// imprimir e calcular a soma de todos os números no intervalo fechado [a, b] que são múltiplos
// de x ou de y, mas não de ambos simultaneamente (ou exclusivo).

#include <stdio.h>

int main() {
    int a, b, x, y;
    int soma = 0;
    printf("Digite os valores a, b, x, y: ");
    scanf("%d %d %d %d", &a, &b, &x, &y);

    for (int i = a; i <= b; i++) {
        int multX = (i % x == 0);
        int multY = (i % y == 0);

        if (multX ^ multY) {
            soma += i;
        }
    }
    
    printf("Soma = %d", soma);
        
    return 0;
}