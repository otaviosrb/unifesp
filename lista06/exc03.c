#include <stdio.h>
#include <string.h>

int compararStrings(char str1[], char str2[]){
    int i=0;

    while (str1[i] != '\0' || str2[i] != '\0'){
        if (str1[i] != str2[i]){
            return 0;
        }
        i++;
    }
    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (compararStrings(str1, str2)){
        printf("As strings sao iguais");
    } else {
        printf("As strings nao sao iguais");
    }
    
    return 0;
}