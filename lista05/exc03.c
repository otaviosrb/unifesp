#include <stdio.h>

int main(){
    float m, T1, T2, Tfus, Cs, Cl, L;
    float Ts, Tl, cal;

    printf("Digite a massa: ");
    scanf("%f", &m);

    printf("Digite a Temp Inicial: ");
    scanf("%f", &T1);

    printf("Digite a Temp Final: ");
    scanf("%f", &T2);

    printf("Digite a Temp de Fusão: ");
    scanf("%f", &Tfus);

    printf("Digite o calor específico no estado sólido: ");
    scanf("%f", &Cs);

    printf("Digite o calor específico no estado líquido: ");
    scanf("%f", &Cl);

    printf("Digite o calor latente de fusão: ");
    scanf("%f", &L);

    Ts = Tfus - T1;
    if (Ts<0) Ts *= (-1.0);
    Tl = T2 - Tfus;

    cal = m*Cs*Ts;
    cal += m*L;
    cal += m*Cl*Tl;

    printf("O número de calorias para ir de %.1fC até %.1fC é %.1f calorias", T1, T2, cal);

    return 0;
}