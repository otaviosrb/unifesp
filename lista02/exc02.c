// Uma liga metálica especial requer uma proporção rigorosa de três componentes: 50% do
// elemento A, 30% do elemento B e 20% do elemento C. Escreva um algoritmo que receba a
// quantidade desejada da liga terminada (em quilogramas) e a taxa de perda esperada durante
// a fundição (em porcentagem). O algoritmo deve calcular a quantidade bruta de cada
// elemento (em gramas) que deve ser introduzida no processo para que, após a perda,
// obtenha-se exatamente a quantidade desejada.

#include <stdio.h>

int main() {
    float qtdFinal, taxaPerda;
    float a_gramas, b_gramas, c_gramas;
    float perdaDecimal, qtdBruta;

    printf("Digite a quantidade desejada da liga terminada (kg): ");
    scanf("%f", &qtdFinal);

    printf("Digite a taxa de perda (%%): ");
    scanf("%f", &taxaPerda);

    if (taxaPerda >= 100 || taxaPerda < 0) {
        printf("Erro: Taxa inválida!");
        return 1;
    }

    perdaDecimal = taxaPerda / 100.0;
    qtdBruta = qtdFinal / (1 - perdaDecimal);

    float A = qtdBruta * 0.5;
    float B = qtdBruta * 0.3;
    float C = qtdBruta * 0.2;

    a_gramas = A * 1000;
    b_gramas = B * 1000;
    c_gramas = C * 1000;

    printf("\nQuantidade de cada elemento (g): ");
    printf("\nElemento A: %.2fg", a_gramas);
    printf("\nElemento B: %.2fg", b_gramas);
    printf("\nElemento C: %.2fg", c_gramas);

    return 0;
}