#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while(str[i]!='\0'){
        i++;
    }

    printf("Quantidade de caracteres: %d", i);

    return 0;
}