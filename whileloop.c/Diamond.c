#include <stdio.h>

int main() {
    int n = 5;  // height of the diamond (odd number)
    int i, j;

    // Upper part
    for (i = 1; i <= n; i += 2) {
        for (j = 0; j < (n - i) / 2; j++)
            printf(" ");
        for (j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }

    // Lower part
    for (i = n - 2; i >= 1; i -= 2) {
        for (j = 0; j < (n - i) / 2; j++)
            printf(" ");
        for (j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
