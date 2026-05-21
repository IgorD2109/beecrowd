#include <stdio.h>

int main()
{
    int N, horas, min, s, resto;
    scanf("%d", &N);
    horas = N / 3600;
    resto = N % 3600;
    min = resto / 60;
    s = resto % 60;
    printf("%d:%d:%d\n", horas, min, s);
    return 0;
}
