#include <stdio.h>

int main(){
    float n1, n2, n3, media;

    printf("Digite as 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1*1 + n2*2 + n3*3) / 6;

    printf("Média: %.2f\n", media);
    if (media >= 6)
        printf("Aprovado");
    else if (media >=3 && media < 6)
        printf("Recuperação");
    else
        printf("Reprovado");

    return 0;
}