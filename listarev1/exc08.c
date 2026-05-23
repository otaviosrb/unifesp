#include <stdio.h>

int main(){
    int a, b, c;

    printf("Digite a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a < b+c) && (a < b+c) && (c < a+b)){
        if (a==b && b==c)
            printf("Equilatero");
        else if (a==b || a==c || b==c)
            printf("Isosceles");
        else
            printf("Escaleno");
    }
    else{
        printf("Nao forma um triangulo");
    }

    return 0;
}