// 8. Escreva um algoritmo que receba um número inteiro positivo e determine se ele é um
// “Número Perfeito”. Um número perfeito é aquele cuja soma de seus divisores próprios
// positivos (excluindo ele mesmo) é igual ao próprio número (ex: 6 = 1 + 2 + 3). Em seguida,
// adapte o algoritmo para encontrar e imprimir todos os números perfeitos em um intervalo
// [1, M] fornecido pelo usuário.

#include <stdio.h>
// PRIMEIRO ALGORITMO
// int main() {
//     int n, somaDivisores=0;

//     printf("Digite um número inteiro positivo: ");
//     scanf("%d", &n);

//     for (int i = 1; i < n; i++) {
//         if (n % i == 0)
//             somaDivisores += i;
//     }

//     if (somaDivisores == n)
//         printf("O número %d é perfeito!", n);
//     else
//         printf("O número %d não é perfeito!", n);

//     return 0;
// }

// ALGORITMO ADAPTADO
int main() {
    int m;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &m);

    for (int n = 1; n < m; n++) {
        int somaDivisores = 0;

        for (int i = 1; i < n; i++) {
            if (n % i == 0)
                somaDivisores += i;
        }
        if (somaDivisores == n)
            printf("%d é um número perfeito\n", n);
    }

    return 0;
}