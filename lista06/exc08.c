#include <stdio.h>
#include <string.h>

void extrairSubstring(char str[], char substr[], int inicio, int tamanho) {
    int i = 0;

    while (i < tamanho && str[inicio + i] != '\0') {
        substr[i] = str[inicio + i];
        i++;
    }

    substr[i] = '\0';
}

int main() {
    char str[100], substr[100];
    int inicio, tamanho;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Digite a posicao inicial da nova string: ");
    scanf("%d", &inicio);

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);

    extrairSubstring(str, substr, inicio, tamanho);

    printf("Substring: %s\n", substr);

    return 0;
}