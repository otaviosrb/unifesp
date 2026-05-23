#include <stdio.h>

int main(){
    int n, i, j, soma;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    
    printf("Digite os %d elementos: ", n);
    for (i=0; i<n; i++){
        scanf("%d", &v[i]);
    }

    printf("Digite o valor da soma: ");
    scanf("%d", &soma);

    for (i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if (v[i] + v[j] == soma)
                printf("%d + %d = %d\n", v[i], v[j], soma);
        }
    }

    return 0;
}