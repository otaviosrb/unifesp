#include <stdio.h>

int main(){
    int n, i, elemento;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    for (i=0; i<n; i++){
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o elemento que deseja procurar no vetor: ");
    scanf("%d", &elemento);

    for (i=0; i<n; i++){
        if (vetor[i] == elemento){
            printf("%d está contido no vetor!", elemento);
            break;
        }
        else {
            printf("%d NÃO está contido no vetor!", elemento);
            break;
        }
    }

    return 0;
}