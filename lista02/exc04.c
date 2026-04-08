// Faça um algoritmo que leia uma sequência de números inteiros positivos, sendo a leitura
// encerrada quando o número 0 ou um número negativo for digitado. O algoritmo deve
// identificar e exibir o comprimento da maior sub-sequência contígua estritamente crescente
// inserida pelo usuário, bem como o valor inicial e final dessa sub-sequência. (Exemplo: na
// sequência 5, 3, 4, 8, 9, 1, a maior sub-sequência crescente é 3, 4, 8, 9, com comprimento 4).

#include <stdio.h>

int main(){
    int n, anterior = 0;
    int qtd_sequencia = 0, maior_seq = 0;
    int inicio_atual = 0, inicio_maior = 0, fim_maior = 0;

    printf("Digite um número n: ");
    scanf("%d", &n);

    while (n > 0) {
        if (qtd_sequencia == 0) {
            inicio_atual = n;
            qtd_sequencia = 1;
        } else if (n > anterior) {
            qtd_sequencia++;
        } else {
            if (qtd_sequencia > maior_seq) {
                maior_seq = qtd_sequencia;
                inicio_maior = inicio_atual;
                fim_maior = anterior;
            }
            inicio_atual = n;
            qtd_sequencia = 1;
        }
        anterior = n;

        printf("Digite um número n: ");
        scanf("%d", &n);
    }
    
    if (qtd_sequencia > maior_seq) {
        maior_seq = qtd_sequencia;
        inicio_maior = inicio_atual;
        fim_maior = anterior;
    }

    printf("\nMaior sequência crescente:\n");
    printf("Comprimento: %d\n", maior_seq);
    printf("Início: %d\n", inicio_maior);
    printf("Fim: %d", fim_maior);

    return 0;
}