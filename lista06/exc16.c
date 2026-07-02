#include <stdio.h>
#include <string.h>

void removerDuplicadas(char str[]) {
    int i = 0, j;

    while (str[i] != '\0') {
        if (str[i] == str[i + 1]) {
            for (j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
        } else {
            i++;
        }
    }
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    removerDuplicadas(str);

    printf("Resultado: %s\n", str);

    return 0;
}