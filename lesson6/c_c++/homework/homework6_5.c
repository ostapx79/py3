/*
 * lesson6/c_c++/homework/homework6_5.c
 */

#include <stdio.h>

int expand_digits_number(int numb_n) {
    int res = 0;
    while (numb_n > 0) {
        res = numb_n % 10;
        printf("%d", res);
        numb_n /= 10;
    }
    return res;
}

int main(int argc, char* argv[]) {
    int numb = 543210;
    int result = expand_digits_number(numb);
    printf("\n");
    return 0;
}
