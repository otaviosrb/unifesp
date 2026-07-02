#include <stdio.h>
#include <string.h>

void contadorletra(char str[]) {
    int i, vogal = 0, consoantes = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {
                if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                 str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
                    vogal++;
                 } else {
                    consoantes++;
                 }
        }
    }
    printf("Vogais: %d\n", vogal);
    printf("Consoantes: %d\n", consoantes);
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    contadorletra(str);

    return 0;
}