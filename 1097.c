#include <stdio.h>

int main() {
    int base_j = 7;

    for (int i = 1; i <= 9; i += 2) {
        for (int j = base_j; j >= base_j - 2; j--) {
            printf("I=%d J=%d\n", i, j);
        }
        base_j += 2;
    }

    return 0;
}