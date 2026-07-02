#include <stdio.h>
#include <string.h>

void insereString(char str[], char substr[], int inicio){
    int tamStr = strlen(str);
    int tamSub = strlen(substr);
    int i;

    for (i = tamStr; i >= inicio; i--){
        str[i+tamSub] = str[i];
    }

    for (i=0; i<tamSub; i++){
        str[inicio+i] = substr[i];
    }
}

int main(){
    char str1[100], str2[100];
    int posicao;

    printf("Digite uma string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Digite uma substring: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("Digite a posicao que deseja inserir: ");
    scanf(" %d", &posicao);

    insereString(str1, str2, posicao);

    printf("Resultado: %s\n", str1);
}