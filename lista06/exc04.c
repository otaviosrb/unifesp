#include <stdio.h>
#include <string.h>

void concatenarStrings(char str1[], char str2[], char resultado[]) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        resultado[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0') {
        resultado[i] = str2[j];
        i++;
        j++;
    }

    resultado[i] = '\0';
}

int main() {
    char str1[100], str2[100], strconc[200];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    concatenarStrings(str1, str2, strconc);

    printf("Strings concatenadas: %s\n", strconc);

    return 0;
}