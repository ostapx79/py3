#include <stdio.h>

int main() {

    for (int i = 1; i <= 4; i++) {
        for (int k = 1; k <= i; k++) {
            printf("k = %d\n", k);
        }
        printf("i = %d\n", i);
    }
    return 0;
}
