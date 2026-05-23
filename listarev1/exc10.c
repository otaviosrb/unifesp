#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;

    printf("Digite a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = (b*b) - 4*a*c;

    if (delta<0){
        printf("Sem raizes");
    }
    else if (delta == 0){
        x1 = (-b+sqrt(delta)) / (2*a);
        printf("Raiz: %f", x1);
    }
    else{
        x1 = (-b+sqrt(delta)) / (2*a);
        x2 = (-b-sqrt(delta)) / (2*a);
        printf("Raizes: %f %f", x1, x2);
    }

    return 0;
}