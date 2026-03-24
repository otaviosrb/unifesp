// 3. Escreva programa que calcule a soma dos N primeiros termos pares do intervalo [0:N]. N
// deve ser fornecido pelo usuário

#include <stdio.h>

int main(){
    int n, soma = 0;

    printf("Digite o número: ");
    scanf("%d", &n);

    while (n > 0){
        if (n % 2 == 0){
            soma += n;
            n--;
        }
        n--;
    }

    printf("Soma dos pares: %d", soma);
    
    return 0;
}