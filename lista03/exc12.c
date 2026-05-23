#include <stdio.h>
#define MAX 5

int main(){
    int v[MAX]={1,2,3,4,5}, i, crescente = 1, decrescente = 1;

    for (i=0; i<MAX-1; i++){
        if (v[i] >= v[i+1]){
            crescente = 0;
        }
        if (v[i] <= v[i+1]){
            decrescente = 0;
        }
    }

    if (crescente && decrescente)
        printf("Vetor é constante");
    else if (crescente)
        printf("Vetor é crescente");
    else if (decrescente)
        printf("Vetor é decrescente");
    else
        printf("Vetor não é ordenado");
    
    return 0;
}