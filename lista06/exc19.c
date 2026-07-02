#include <stdio.h>
#include <string.h>

int qtdDigitos(char str[]){
    int i, qtd=0;

    for (i=0; str[i] != '\0'; i++){
        if (str[i] >= '0' && str[i] <= '9')
            qtd++;
    }

    return qtd;
}


int main(){
    char str[100], str2[100];
    int posicao;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Quantidade de digitos: %d\n", qtdDigitos(str));


}