#include <stdio.h>

int main(){
    int n1, n2, i, qtd, igualdade = 1;

    printf("Digite a quantidade de elementos do 1º vetor: ");
    scanf("%d", &n1);
    int v1[n1];
    printf("Digite os %d elementos do 1º vetor: ", n1);
    for (i=0; i<n1; i++) scanf("%d", &v1[i]);

    printf("\nDigite a quantidade de elementos do 2º vetor: ");
    scanf("%d", &n2);
    int v2[n2];
    printf("Digite os %d elementos do 2º vetor: ", n2);
    for (i=0; i<n2; i++) scanf("%d", &v2[i]);

    if (n1 != n2){
        igualdade = 0;
    }
    else {
        for (i=0; i<n1; i++){
            if (v1[i] != v2[i]) {
                igualdade = 0;
                break;
            }
        }
    }

    if (igualdade)
        printf("\nOs vetores são iguais");
    else
        printf("\nOs vetores são diferentes");
    
    return 0;
}