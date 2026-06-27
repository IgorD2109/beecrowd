#include <stdio.h>

int main() {                             //Cobaias: sapos, ratos e coelhos
    int N, quantia;
    int ratos = 0, sapos = 0, coelhos = 0;
    char animal;
    float total = 0, p1, p2, p3;

    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d %c", &quantia, &animal);
        if(animal == 'R') {
            ratos += quantia;
            total += quantia;
        } else if(animal == 'S'){
            sapos += quantia;
            total += quantia;
        } else if(animal == 'C') {
            coelhos += quantia;
            total += quantia;
        }
    }

    printf("Total: %.0lf cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", p1=(100*coelhos)/total);
    printf("Percentual de ratos: %.2lf %%\n", p2=(100*ratos)/total);
    printf("Percentual de sapos: %.2lf %%\n", p3=(100*sapos)/total);
    return 0;
}