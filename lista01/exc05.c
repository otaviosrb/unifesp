// 5. Faça um programa que receba diversos números inteiros. A leitura dos números deve ser
// interrompida quando o número 0 for digitado. Utilizando os números fornecidos, calcule:
// a) a soma dos números digitados;
// b) a quantidade de números digitados;
// c) a média dos números digitados;
// d) o maior número digitado;
// e) o menor número digitado;
// f) a média dos números impares digitados;
// g) a média dos números pares digitados;
// h) a média dos números primos digitados;
// i) o percentual dos números múltiplos de 5 entre todos os números digitados;

#include <stdio.h>

int main(){
    int n;
    int soma = 0, qtd = 0;
    int maior, menor;
    int somaPar = 0, qtdPar = 0;
    int somaImpar = 0, qtdImpar = 0;
    int somaPrimos = 0, qtdPrimos = 0;
    int divisores, i;
    int mult5 = 0;

    printf("Digite um valor (0 para sair): ");
    scanf("%d", &n);

    while (n != 0) {
        soma += n;
        qtd++;
        
        if (qtd == 0){
            maior = n;
            menor = n;
        }
        if (n > maior) maior = n;
        if (n < menor) menor = n;

        if (n % 2 == 0){
            somaPar += n;
            qtdPar++;
        } else {
            somaImpar += n;
            qtdImpar++;
        }

        if (n > 1){
            divisores = 0;
            i = 1;
            while (i <= n){
                if (n % i == 0){
                    divisores ++;
                }
                i++;
            }
            if (divisores == 2) {
                somaPrimos += n;
                qtdPrimos++;
            }
        }

        if (n % 5 == 0){
            mult5++;
        }

        printf("Digite um valor (0 para sair): ");
        scanf("%d", &n);
    }

    printf("a) Soma: %d\n", soma);
    printf("b) Quantidade: %d\n", qtd);
    if (qtd > 0){
        printf("c) Média: %.2f\n", (float)soma / qtd);
        printf("d) Maior: %d\n", maior);
        printf("e) Menor: %d\n", menor);
    }
    if (qtdImpar > 0){
        printf("f) Média Ímpares: %.2f\n", (float)somaImpar / qtdImpar);
    }
    if (qtdPar > 0){
        printf("g) Média Pares: %.2f\n", (float)somaPar / qtdPar);
    }
    if (qtdPrimos > 0){
        printf("h) Média Primos: %.2f\n", (float)somaPrimos / qtdPrimos);
    }
    if (qtd > 0){
        printf("i) Percentual Múltiplos de 5: %.2f%%\n", (float)mult5 * 100 / qtd);
    }

    return 0;
}