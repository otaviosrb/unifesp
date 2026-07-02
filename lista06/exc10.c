#include <stdio.h>
#include <string.h>

void minusculas(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    minusculas(str);

    printf("String em minusculas: %s\n", str);

    return 0;
}