#include <stdio.h>

int main() {
    int numb, numb_power;

    numb = 1;
    numb_power = 2;

    while (numb <= 10) {
        printf("степень  2  = %d\n", numb_power);

        numb_power *= 2;
        numb += 1;
    }

    return 0;
}
