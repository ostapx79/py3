#include <stdio.h>

int main() {
    int numb;

    for (numb = 1; numb <= 10; numb += 2) {
        printf("numb = %d\n", numb * numb);
    }
    return 0;
}
