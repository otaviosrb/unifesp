#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Digite os coeficientes A, B, C: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c;
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raízes reais: x1 = %.2f, x2 = %.2f", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz única: x = %.2f", x1);
    } else {
        printf("Não existem raízes reais");
    }

    return 0;
}
