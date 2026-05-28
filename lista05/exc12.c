#include <stdio.h>

int main(){
    int n, i;
    float sinal = 1 , s=0.0;
  
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i=0; i<=n; i++){
        s += sinal / (2*i+1);
        sinal *= (-1);
    }

    printf("Aproximacao de pi = %.10f\n", 4 * s);

    return 0;
}