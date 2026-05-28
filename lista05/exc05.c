#include <stdio.h>
#include <math.h>

int main(){
    float i, x1, y1, x2, y2, dist;

    printf("Digite as cooordenadas do ponto 1: ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as cooordenadas do ponto 2: ");
    scanf("%f %f", &x2, &y2);

    dist = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    printf("Distância entre os pontos: %.2f\n", dist);

    return 0;
}