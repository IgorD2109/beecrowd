#include <stdio.h>

int main()
{
    int N, anos, meses, dias, resto;
    scanf("%d", &N);
    anos = N / 365;
    resto = N % 365;
    meses = resto / 30;
    dias = resto % 30;
    pritf("%d ano(s)\n%d mes(es)\n%d dia(s)", anos, meses, dias);

    return 0;
}
