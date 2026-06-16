#include <stdio.h>

int main () {
    int valor;
    int maior = -1;
    int posicao= 0;

    for(int i=1;i<=100;i++) {
        scanf("%d", &valor);

        if(valor > maior) {
            maior = valor;
            posicao = i;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);
    return 0;
}