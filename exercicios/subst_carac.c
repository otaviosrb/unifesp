#include <stdio.h>

int main(){
    char S[100];
    char a, b;
    int i=0;

    scanf(" %[^\n]", S);
    scanf(" %c %c", &a, &b);

    while (S[i] != '\0'){
        if (S[i] == a)
            S[i] = b;
        i++;
    }

    printf("%s", S);

    return 0;
}