/*
 * lesson6/c_c++/homework/homework6_7.c
 */
#include <stdio.h>

int factorial(int numb_n) {
    int res = 1;
    for (int i = 1; i <= numb_n; i++) {
        res *= i;
    }
    return res;
}

int main(int argc, char* argv[]) {
    int numb = 5;
    int result = factorial(numb);
    printf("%d\n", result);
    return 0;
}
