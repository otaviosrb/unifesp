#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

void buscastr(char str[], char str2[]) {
    int i, j;

    for (i=0; str[i] != '\0'; i++){
        j=0;

        while (str2[j] != '\0' && str[i + j] == str2[j]) {
            j++;
        }

        if (str2[j] == '\0') {
            printf("Substring encontrada na posicao %d\n", i);
            return;
        }
    }
    printf("Substring nao encontrada.\n");
}

int main() {
    char str[100], strprocurada[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Digite uma string: ");
    fgets(strprocurada, sizeof(strprocurada), stdin);
    strprocurada[strcspn(strprocurada, "\n")] = '\0';

    buscastr(str, strprocurada);

    return 0;
}