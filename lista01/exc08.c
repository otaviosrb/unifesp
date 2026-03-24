// 8. Escreva um programa para calcular a soma dos números primos existentes num intervalo
// [a:b] fornecido pelo usuário.

#include <stdio.h>

int main(){
    int a, b, somaPrimos = 0, i;
    printf("Digite os valores a e b: ");
    scanf("%d %d", &a, &b);

    i = a;
    while (i<=b){
        int qtdDivisores = 0;
        int j = 1;

        if (i > 1) {
            while (j <= i) {
                if (i % j == 0){
                    qtdDivisores++;
                }
                j++;
            }
        }
        if (qtdDivisores == 2){
            somaPrimos += i;
        }
        i++;
    }

    printf("Soma dos primos: %d", somaPrimos);
    return 0;
}