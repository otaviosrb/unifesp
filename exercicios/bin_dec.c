#include <stdio.h>

int main(){
    long int bin, dec=0, base=1, resto;
    printf("Digite um número binário: ");
    scanf("%ld", &bin);

    while (bin!=0){
        resto = bin % 10;
        bin = bin / 10;
        dec = dec + base * resto;
        base = base * 2;
    }

    printf("O resultado decimal é: %ld\n", dec);
    return 0;
}