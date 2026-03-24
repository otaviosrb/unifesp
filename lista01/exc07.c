// 7. Escreva um programa que calcule um número inteiro que mais se aproxime da raiz
// quadrada de um número fornecido pelo usuário.

#include <stdio.h>

int main(){
    int num, r = 1;
    printf("Digite um número: ");
    scanf("%d", &num);

    while (r*r <= num){
        r++;
    }
    if (num - (r-1)*(r-1) <= r * r - num){
        printf("%d", r-1);
    } else {
        printf("%d", r);
    }
    return 0;
}