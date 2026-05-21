#include <stdio.h>
int main() {

    int X;          //X: Distância total percurrida em KM.
    double Y, totalgasto;       //Y: Total de combustivel gasto

    scanf("%d", &X);
    scanf("%lf", &Y);

    totalgasto = X / Y;

    printf("%.3lf km/l\n", totalgasto);

    return 0;
}