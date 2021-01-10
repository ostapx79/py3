/* 
 * py3/c_c++/lesson6/homework/homework6_8.c
 */
#include <stdio.h>

int number_fibonacci(int numb) {
    int fib_1 = 0;
    int fib_2 = 1;

    if (numb == 0) return 0;
    if (numb == 1 || numb == 2) return 1;

    int i;
    for (i = 1; i <= numb; ++i) {
        fib_1 = fib_2 + fib_1;
        fib_2 = fib_1 - fib_2;
    }

    return fib_1;
}

int main() {
    int numb_i;
    printf("Введите число - ");
    scanf("%d", &numb_i);

    int result_fib;
    result_fib = number_fibonacci(numb_i);
    printf("%d\n", result_fib);

    return 0;
}
