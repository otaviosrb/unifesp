#include <stdio.h>
#include <string.h>

void maiusculas(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    maiusculas(str);

    printf("String em maiusculas: %s\n", str);

    return 0;
}