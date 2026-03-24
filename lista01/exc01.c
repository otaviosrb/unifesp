// 1. Faça um programa que imprima todos os múltiplos de 9 ou 19 no intervalo [a:b]. a e b
// devem ser fornecidos pelo usuário

#include <stdio.h>

int main(){
    int a, b, i;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    i = a;

    while (i <= b) {
        if (i % 9 == 0 || i % 19 == 0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}