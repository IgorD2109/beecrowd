#include <stdio.h>

int main() {
    int gG, gI, grenal;                                          //gG: gols do grêmio gI: gols do inter
    int nI=0, nG=0, inter=0, gremio=0, empate=0, grenais=1;

    while(grenal!=2) {
        scanf("%d %d", &gI, &gG);
        nI+=gI;
        nG+=gG;
        if(gI>gG) {
            inter++;
        } else if(gI<gG) {
            gremio++;
        } else {
            empate++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &grenal);
        if(grenal==1) {
            grenais++;
        }

    } 
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empate);
    if(inter>gremio) {
        printf("Inter venceu mais\n");
    } else if(gremio>inter) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}