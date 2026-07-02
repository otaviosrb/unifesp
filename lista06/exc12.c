#include <stdio.h>
#include <string.h>

void inverterPalavras(char str[]) {
    int i = strlen(str) - 1;
    int fim, inicio;

    while (i >= 0) {

        // Ignora espaços no final
        while (i >= 0 && str[i] == ' ')
            i--;

        if (i < 0)
            break;

        fim = i;

        // Encontra o início da palavra
        while (i >= 0 && str[i] != ' ')
            i--;

        inicio = i + 1;

        // Imprime a palavra
        for (int j = inicio; j <= fim; j++)
            printf("%c", str[j]);

        printf(" ");
    }
}

int main() {
    char str[100];

    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Frase invertida: ");
    inverterPalavras(str);

    return 0;
}