// 6. Faça um algoritmo que leia um número inteiro positivo e verifique se ele é um palíndromo
// (ou seja, se o seu valor lido da esquerda para a direita é igual ao da direita para a esquerda).
// O algoritmo deve realizar as operações puramente de forma matemática, isolando e
// invertendo os dígitos através de divisões e restos de divisão, sem tratar o número como
// texto/string.

#include <stdio.h>

int main() {
    int n, original=0, invertido=0, resto;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    original = n;

    while (n>0) {
        resto = n % 10;
        invertido = invertido * 10 + resto;
        n = n / 10 ;
    }

    if (original == invertido) 
        printf("O número é um palíndromo");
    else
        printf("O número não é um palíndromo");

    return 0;
}