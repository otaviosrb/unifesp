#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, palavras = 0, dentro = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {

        if (str[i] != ' ' && dentro == 0) {
            palavras++;
            dentro = 1;
        }

        if (str[i] == ' ') {
            dentro = 0;
        }
        i++;
    }

    printf("Quantidade de palavras: %d\n", palavras);

    return 0;
}