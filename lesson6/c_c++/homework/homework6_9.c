/*
 * py3/lesson6/c_c++/homework/homework6_9.c
 */
#include <stdio.h>

int sum_digits(int numb_i) {
    int res = 1;
    int i;
    for (i = 0; i <= numb_i; i++) {
        res += i;
    }
    return res;
}

int same_numb(int numb_n) {
    int same = 0;
    int i;
    for (i = 0; i < numb_n; i++) {
        if (sum_digits(i) == sum_digits(i * 9)) {
            same = sum_digits(i);
        }
    }
    return same;
}

int main() {
    int numb = 25;
    int result = same_numb(numb);
    printf("%d\n", result);
    return 0;
}
