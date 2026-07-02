#include <stdio.h>
#include <string.h>

int stringParaInteiro(char str[]) {
    int i, numero = 0;

    for (i = 0; str[i] != '\0'; i++) {
        numero = numero * 10 + (str[i] - '0');
    }

    return numero;
}

int main() {
    char str[100];

    printf("Digite um numero: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Valor inteiro: %d\n", stringParaInteiro(str));

    return 0;
}