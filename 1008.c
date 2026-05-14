#include <stdio.h>
int main () {

    int NF, HT;
    double salario, VH;
    //NF: num do funcionário HT: horas trabalhadas VH: valor das horas

    scanf("%d", &NF);
    scanf("%d", &HT);
    scanf("%lf", &VH);

    salario = VH * HT;

    printf("NUMBER = %d\n", NF);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}