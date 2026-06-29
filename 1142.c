#include <stdio.h>

int main() {
    int N, pum=1;
    scanf("%d", &N);

    for(int i=1;i<=N;i++) {
        printf("%d %d %d PUM\n", pum, pum+1, pum+2 );
        pum+=4;
    }
    return 0;
}