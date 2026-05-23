#include <stdio.h>

int main(){
    float latao, cobre, zinco;

    printf("Digite a massa total da liga de latão: ");
    scanf("%f", &latao);

    cobre = latao * 0.7;
    zinco = latao  * 0.3;

    printf("\nCobre: %.2fg\nZinco: %.2fg", cobre, zinco);

    return 0;
}