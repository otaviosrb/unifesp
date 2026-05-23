#include <stdio.h>
#include <string.h>

int main(){
    char S1[100], S2[100];
    int i=0, j=0;

    scanf("%s", S1);
    scanf("%s", S2);

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

    return 0;
}