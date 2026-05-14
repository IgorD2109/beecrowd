#include <stdio.h>
int main() {

    int C1, C2, N1, N2;
    double VU1, VU2, valor;
    // C: codigo N: num VU: valor unitário

    scanf("%d %d %lf", &C1, &N1, &VU1);
    scanf("%d %d %lf", &C2, &N2, &VU2);

    valor = (N1 * VU1) + (N2 * VU2);

    printf("VALOR A PAGAR: R$ %.2f\n", valor);

    return 0;
}