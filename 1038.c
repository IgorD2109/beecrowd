#include <stdio.h>

int main()
{
    int cod, Q;  //Q: Quantidade Cod: código
    double valor;
    
    scanf("%d %d", &cod, &Q);
    
    if (cod == 1) 
    {
        valor = Q * 4.00;
        printf("Total: R$ %.2lf\n", valor);
    }
        if (cod == 2) 
    {
        valor = Q * 4.50;
        printf("Total: R$ %.2lf\n", valor);
    }
        if (cod == 3) 
    {
        valor = Q * 5.00;
        printf("Total: R$ %.2lf\n", valor);
    }
        if (cod == 4) 
    {
        valor = Q * 2.00;
        printf("Total: R$ %.2lf\n", valor);
    }
        if (cod == 5) 
    {
        valor = Q * 1.50;
        printf("Total: R$ %.2lf\n", valor);
    }
    

    return 0;
}
