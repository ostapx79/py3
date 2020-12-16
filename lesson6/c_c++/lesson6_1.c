/*
 * lesson6/c_c++/lesson6_1.c
 * Функции
 */
#include <stdio.h>

int summDigits(int numb_n) {
    int sum = 0;
    while (numb_n != 0) {
        sum += numb_n % 10;
        numb_n /= 10;
    }
    return sum;
}

int main() {
    printf("%d\n", summDigits(12345));
    return 0;
}
