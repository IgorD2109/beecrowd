#include <stdio.h>

int main()
{
    int tempo, velocidade;
    double distancia, litros;
    
    scanf("%d", &tempo);
    scanf("%d", &velocidade);
    
    distancia = velocidade * tempo;
    litros = distancia / 12;
    
    printf("%.3lf\n", litros);

    return 0;
}
