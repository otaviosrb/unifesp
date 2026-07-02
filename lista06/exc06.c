#include <stdio.h>
#include <string.h>


int main() {
    char str[100], caracAntigo, caracNovo;
    int i = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Digite o caractere que quer remover: ");
    scanf(" %c", &caracAntigo);
    
    printf("Digite o caractere que quer adicionar: ");
    scanf(" %c", &caracNovo);

    while (str[i] != '\0'){
        if(str[i] == caracAntigo){
            str[i] = caracNovo;
        }
        i++;
    }

    printf("Nova String: %s", str);

    return 0;
}