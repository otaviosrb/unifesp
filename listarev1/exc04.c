#include <stdio.h>

int main(){
    float valor, notas[12]={100, 50, 20, 10, 5, 2, 1,0.5, 0.25, 0.1, 0.05, 0.01};
    int n, qtd[12]={0};

    printf("Digite o valor: ");
    scanf("%f", &valor);

    for (n=0; n<=12; n++){
        while (valor >= notas[n]){
            qtd[n]++;
            valor -= notas[n];
        }
    }
    
    for (n=0; n<12; n++){
        if (qtd[n] > 0){
            if (n<6)
                printf("%d notas de %.2f\n", qtd[n], notas[n]);
            else
                printf("%d moedas de %.2f\n", qtd[n], notas[n]);
        }
    }

    return 0;
}