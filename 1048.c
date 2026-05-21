#include <stdio.h>

int main()
{
    double salario, reajuste, novo_salario;
    scanf("%lf", &salario);
    
    if (salario<=400.00 && salario>=0)
    {
        reajuste = salario * 0.15;
        novo_salario = salario + reajuste;
        printf("Novo salario: %.2lf\n", novo_salario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 15 %%\n");
    }
    if (salario<=800.00 && salario>=400.01)
    {
        reajuste = salario * 0.12;
        novo_salario = salario + reajuste;
        printf("Novo salario: %.2lf\n", novo_salario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 12 %%\n");
    }
    if (salario<=1200.00 && salario>=800.01)
    {
        reajuste = salario * 0.10;
        novo_salario = salario + reajuste;
        printf("Novo salario: %.2lf\n", novo_salario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 10 %%\n");
    }
    if (salario<=2000.00 && salario>=1200.01)
    {
        reajuste = salario * 0.07;
        novo_salario = salario + reajuste;
        printf("Novo salario: %.2lf\n", novo_salario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 7 %%\n");
    }
    if (salario>2000.00)
    {
        reajuste = salario * 0.04;
        novo_salario = salario + reajuste;
        printf("Novo salario: %.2lf\n", novo_salario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 4 %%\n");
    }
    

    return 0;
}
