#include <stdio.h>
#include <string.h>

int main(){
    char S1[100], S2[100];
    int i=0, j=0, iguais=1;

    scanf(" %[^\n]", S1);
    scanf(" %[^\n]", S2);

    while (S1[i] != '\0' || S2[i] != '\0'){
        if(S1[i] != S2[i]){
            iguais = 0;
            break;
        }
        i++;
    }
    
    if (iguais){
        printf("Sao iguais");
    }
    else {
        while (S1[i] != '\0'){
            i++;
        }

        while (S2[j] != '\0'){
            S1[i] = S2[j];
            i++;
            j++;
        }

        S1[i] = '\0';

        printf("%s", S1);
    }

    return 0;
}