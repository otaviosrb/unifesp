// 6. Escreva um algoritmo para calcular a média ponderada de uma sequência de números
// inteiros e positivos com seus respectivos pesos. O usuário deve informar o número e o seu
// peso. A leitura deve encerrar quando o valor -1 for lido como valor de entrada

#include <stdio.h>

int main(){
    float nota, somaPonderada = 0;
    int peso, somaPesos = 0;

    printf("Digite a nota (-1 para sair): ");
    scanf("%f", &nota);

    while (nota != -1){
        printf("Digite o peso: ");
        scanf("%d", &peso);

        somaPonderada += nota * peso;
        somaPesos += peso;

        printf("Digite a nota (-1 para sair): ");
        scanf("%f", &nota);
    }

    if (somaPesos > 0){
        printf("Média ponderada: %.2f", somaPonderada / somaPesos);
    } else {
        printf("Não foi digitado nenhum valor válido!");
    }

    return 0;
}