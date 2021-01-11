/*
 * py3/lesson6/c_c++/homework/homework6_9.c
 */
#include <stdio.h>

int sum_digits(int numb_i) {
    int res = 0;
    int i;
    for (i = 1; i <= numb_i; i++) {
        res += i;
    }
    return res;
}

int main() {
    int numb = 15;
    int i;
    for (i = numb; i > 0; i--) {
        if (sum_digits(i) == sum_digits(i * 9)) {
            printf("%d\n", i);
        }
        printf("%d\n", i);
    }
    return 0;
}
