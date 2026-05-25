#include <stdio.h>
 
int main() {
    float valor;
    int cont_positivos = 0;
    int rodada = 0;

    while (rodada < 6) {
        scanf("%f", &valor);
        if (valor>0) {
            cont_positivos++;
        }

        rodada++;
    
    }

    printf("%d valores positivos\n", cont_positivos);

    return 0;
}