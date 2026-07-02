#include <stdio.h>

int contarDigitos(int n) {
    if (n < 0)
        n = -n;

    if (n < 10)
        return 1;

    return 1 + contarDigitos(n / 10);
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Quantidade de digitos: %d\n", contarDigitos(num));

    return 0;
}