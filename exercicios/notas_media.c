#include <stdio.h>

int main(){
    float NOTA[100];
    float soma=0, media;
    int i;

    for (i=0; i<100; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &NOTA[i]);
        soma += NOTA[i];
    }

    media = soma / 100;
    printf("A média é: %.2f", media);

    printf("Notas abaixo da média:\n");
    for (i=0; i<100; i++) {
        if (NOTA[i] < media )
            printf("%.2f\n", NOTA[i]);
    }
    
    return 0;
}  