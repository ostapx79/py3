/*
 * lesson6/c_c++/lesson6_3.c
 */
#include <stdio.h>

int sumDigits(int numb_n) {
    int numb_i = 0;
    while (numb_n != 0) {
        numb_i += numb_n % 10;
        numb_n /= 10;
    }
    return numb_i;
}

int main() {
    int numb = 12345;
    int numb_res = sumDigits(numb);
    printf("numb_res -> %d\n", numb_res);

    int numb_k = 54321;
    int numb_m = 12345;
    int numb_z = sumDigits(numb_k) + sumDigits(numb_m);
    printf("numb_z -> %d\n", numb_z);

    if (sumDigits(numb) % 2 == 0) {
        printf("сумма цифр четная\n");
        printf("она равна %d\n", sumDigits(numb));
    } else {
        printf("сумма цифр не четная\n");
    }
    return 0;
}
