#include <stdio.h>

int main(){
    float v, l;

    printf("Digite a velocidade do veículo: ");
    scanf("%f", &v);

    printf("Digite o limite de velocidade da via: ");
    scanf("%f", &l);

    if (v<=l)
        printf("Sem multas");
    else if (v <= l*1.1)
        printf("Multa: R$ 50,00");
    else if (v <= l*1.3)
        printf("Multa: R$ 100,00");
    else
        printf("Multa: R$ 200,00");

    return 0;
}