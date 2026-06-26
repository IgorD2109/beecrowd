#include <stdio.h>

int main () {
    double n1, n2, media;
    int cont = 0;
    int opcao = 2;

    while(cont < 1) {
        scanf("%lf", &n1);
        if(n1>=0.0 && n1<=10.0) {
            cont++;
        } else {
            printf("nota invalida\n");
    }

    while(cont < 2) {
        scanf("%lf", &n2);
        if(n2>=0.0 && n2<=10.0) {
            cont++;
        } else {
            printf("nota invalida\n");
        }
    }

    media = (n1 + n2)/2.0;
    printf("media = %.2lf\n", media);

    switch (opcao) {
        case 1:
        
    }


    return 0;
}