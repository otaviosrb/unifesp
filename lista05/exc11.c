#include <stdio.h>

int main(){
    int n, i;
    double s=0.0, fatorial = 1.0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i=0; i<=n; i++){
        if (i>0){
            fatorial *= i;
        }

        s += 1.0 / fatorial;
    }

    printf("S = %.2lf\n", s);

    return 0;
}