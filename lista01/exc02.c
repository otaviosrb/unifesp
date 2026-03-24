// 2. Sabendo que latão é constituído de 70% de cobre e 30% de zinco, indique a quantidade
// de cada um desses componentes para se obter uma certa quantidade de latão, em gramas,
// dada pelo usuário.

#include <stdio.h>

int main(){
    float latao, cobre, zinco;

    printf("Digite a quantidade de latão em gramas: ");
    scanf("%f", &latao);

    cobre = latao * 0.7;
    zinco = latao * 0.3;

    printf("Você precisa de %.2fg de cobre e %.2fg de zinco.", cobre, zinco);

    return 0;
}