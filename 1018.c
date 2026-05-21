#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, n6, n7, resto, N;
    scanf("%d", &N);
    
    n1 = N / 100;
    resto = N % 100;
    n2 = resto / 50;
    resto = resto % 50;
    n3 = resto / 20;
    resto = resto % 20;
    n4 = resto / 10;
    resto = resto % 10;
    n5 = resto / 5;
    resto = resto % 5;
    n6 = resto / 2;
    resto = resto % 2;
    n7 = resto / 1;
    resto = resto % 1;
    
    if (0<N && N<1000000)
    {
    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", n1);
        printf("%d nota(s) de R$ 50,00\n", n2);
            printf("%d nota(s) de R$ 20,00\n", n3);
                printf("%d nota(s) de R$ 10,00\n", n4);
                    printf("%d nota(s) de R$ 5,00\n", n5);
                        printf("%d nota(s) de R$ 2,00\n", n6);
                            printf("%d nota(s) de R$ 1,00\n", n7);
    }
    
    return 0;
}
