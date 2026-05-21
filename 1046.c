#include <stdio.h>

int main()
{
    int inicial, final, total;
    scanf("%d %d", &inicial, &final);
   
        if (final > inicial) {
            total = final - inicial;
        }
        else {
            total = 24 - inicial + final;
        }
    printf("O JOGO DUROU %d HORA(S)\n", total);
    
    return 0;
}
