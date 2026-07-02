#include <stdio.h>

int divisao(int dividendo, int divisor) {
    if (divisor == 0) {
        printf("Erro: divisao por zero!\n");
        return -1;
    }

    if (dividendo < divisor)
        return 0;

    return 1 + divisao(dividendo - divisor, divisor);
}

int main() {
    int a, b;

    printf("Digite o dividendo e o divisor: ");
    scanf("%d %d", &a, &b);

    printf("Resultado: %d\n", divisao(a, b));

    return 0;
}