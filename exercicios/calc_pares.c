#include <stdio.h>

int main(){
    int valores[100];
    int qtd_pares=0, qtd_impares=0, i;

    for (i=0; i<100; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d", &valores[i]);
    }

    printf("PARES: \n");
    for (i=0; i<100; i++){
        if (valores[i] % 2 == 0) {
            qtd_pares++;
            printf("%d\n", valores[i]);
        }
    }
    printf("Quantidade de pares: %d\n", qtd_pares);

    printf("\nÍMPARES: \n");
    for (i=0; i<100; i++){
        if ((valores[i] % 2 != 0)) {
            qtd_impares++;
            printf("%d\n", valores[i]);
        }
    }
    printf("Quantidade de ímpares: %d\n", qtd_impares);
    
    return 0;
}