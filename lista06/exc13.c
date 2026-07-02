#include <stdio.h>
#include <string.h>

void removerEspeciais(char str[]) {
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    removerEspeciais(str);

    printf("String sem caracteres especiais: %s\n", str);

    return 0;
}