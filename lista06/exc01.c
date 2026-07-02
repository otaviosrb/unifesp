#include <stdio.h>
#include <string.h>

int main(){
    char str[100], aux;
    int i, tamanho;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    tamanho = strlen(str);

    for (i=0; i<tamanho/2; i++){
        aux = str[i];
        str[i] = str[tamanho-1-i];
        str[tamanho-1-i] = aux;
    }

    printf("String invertida: %s", str);

    return 0;
}