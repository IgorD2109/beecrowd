#include <stdio.h>

int main()
{
    int X, Y, menor, maior, soma=0;
    scanf("%d %d", &X, &Y);
    if(X>Y){
        maior=X;
        menor=Y;
    }
    else if(Y>X) {
        maior=Y;
        menor=X;
    }
    for(int i=menor+1; i<maior; i++) {
        if (i%2 != 0) {
            soma += i; 
        }
    }
    printf("%d\n", soma);
    
    return 0;
}