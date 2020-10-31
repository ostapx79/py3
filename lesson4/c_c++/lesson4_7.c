#include <stdio.h>

int main() {
    int32_t numb, numb_power;

    numb_power = 2;

    for (numb = 1; numb <= 10; numb++) {
        printf("numb_power = %d\n", numb_power);
        numb_power *= 2;
    }
    return 0;
}
