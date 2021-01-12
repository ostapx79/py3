/*
 * py3/lesson6/c_c++/homework/homework6_9.c
 */
#include <stdio.h>

int sum_digits(int numb_i) {
    int res = 0;
    int i = 0;
    while (numb_i > i) {
        res += numb_i % 10;
        numb_i /= 10;
    }
    return res;
}

int main() {
    int numb = 100;
    int i;
    for (i = 0; i <= numb; i++) {
        if (sum_digits(i) == sum_digits(i * 9)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
