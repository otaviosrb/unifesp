#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define M 30

int main() {
    int dado, n, i, lances[6]={0, 0, 0, 0, 0, 0};

    srand(time(NULL));
    printf("Digite o valor de lançamentos: ");
    scanf("%d", &n);

    for (i=0; i<n; i++) {
        dado = 1 + rand()%6;
        lances[dado-1]++;
        printf("%d ", dado);
    }

    printf("\n");

    for (i=0; i<6; i++) {
        printf("A face %d foi obtida %d vezes\n", i+1, lances[i]);
    }

    return 0;
}