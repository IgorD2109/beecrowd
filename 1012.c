#include <stdio.h>
int main() {
    double A, B, C, A1, A2, A3, A4, A5;
    double pi = 3.14159;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);


    A1 = (A * C) / 2;

    A2 = pi * (C * C);

    A3 = ((A + B) * C) / 2;

    A4 = B * B;

    A5 = A * B;

    printf("TRIANGULO: %.3f\n", A1);
    printf("CIRCULO: %.3f\n", A2);
    printf("TRAPEZIO: %.3f\n", A3);
    printf("QUADRADO: %.3f\n", A4);
    printf("RETANGULO: %.3f\n", A5);

    return 0;

}