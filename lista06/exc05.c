#include <stdio.h>
#include <string.h>


int main() {
    char str[100];
    int palindromo = 1, inicio, fim;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    inicio = 0;
    fim = strlen(str) - 1;
    while (inicio < fim){
        if(str[inicio] != str[fim]){
            palindromo = 0;
        }
        inicio++;
        fim--;
    }

    if(palindromo)
        printf("A string e um palindromo.");
    else
        printf("A string nao e um palindromo.");

    return 0;
}