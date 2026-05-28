#include <stdio.h>

int main(){
    float raio, altura, pi=3.14, area, volume;

    printf("Digite o raio e altura: ");
    scanf("%f %f", &raio, &altura);

    area = 2*pi*raio*(raio+altura);
    volume = pi * (raio*raio) * altura;

    printf("\nÁrea: %.2f\nVolume: %.2f", area, volume);
    
    return 0;
}