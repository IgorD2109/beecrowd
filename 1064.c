#include <stdio.h>
int main () {

    float valor, media;
    float soma = 0;
    int posi = 0;
    int rodada;

    for(rodada=0;rodada<6;rodada++) {
        scanf("%f", &valor);
        if(valor>0) {
            soma=soma+valor;
            posi++;
        }
    }
     printf("%d valores positivos\n", posi);
     printf("%.1f\n", media=soma/posi);

    return 0;
}