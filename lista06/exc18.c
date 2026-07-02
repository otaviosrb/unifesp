#include <stdio.h>
#include <string.h>

void capitaliza(char str[]){
    int i;
    int novaPalavra = 1;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            novaPalavra = 1;
        }
        else {
            if (novaPalavra && str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
            novaPalavra = 0;
        }
    }
}


int main(){
    char str[100], str2[100];
    int posicao;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    capitaliza(str);

    printf("Resultado: %s\n", str);
}