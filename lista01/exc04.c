// 4. Escreva um programa que mostre o fatorial dos números contidos no intervalo [a:b]. a e
// b devem ser fornecidos pelo usuário

#include <stdio.h>

int main(){
    int a, b, i, j, fatorial;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    i = a;
    while (i <= b){
        fatorial = 1;
        j = i;
        while (j > 1){
            fatorial *= j;
            j--;
        }
        printf("O fatorial de %d é %d\n", i, fatorial);

        i++;
    }
    return 0;
}