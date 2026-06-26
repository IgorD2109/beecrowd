#include <stdio.h>

int main () {

    int x, y, menor, maior;
    int soma=0;

    scanf("%d %d", &x, &y);

    if(x>y) {
        menor = y;
        maior = x;
    } else {
        menor = x;
        maior = y;
    }

    for(int i = menor;i<=maior;i++) {
        if(i % 13 != 0) {
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}