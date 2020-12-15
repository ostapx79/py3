/*
 * lesson5/c_c++/homework/homework5_11.c
 */
#include <stdio.h>

void fibonacciNumbers(int numb_fib) {
    int first_fib_numb = 0;
    int second_fib_numb = 1;
    int numb_i = 0;
    while (numb_i <= numb_fib) {
        printf("first Fibonacci number -> %d\n", first_fib_numb);
        printf("second Fibonacci number -> %d\n", second_fib_numb);
        int fib_res = first_fib_numb + second_fib_numb;
        printf("result Fibonacci numbers -> %d\n", fib_res);
        printf("\n");
        first_fib_numb = second_fib_numb;
        second_fib_numb = fib_res;
        ++numb_i;
    }
}

int main() {
    int numb_in;
    printf("Введите число -> ");
    scanf("%d", &numb_in);
    printf("\n");
    fibonacciNumbers(numb_in);
    return 0;
}
