//: lesson4/c_c++/homework/homework4_28.c
#include <stdio.h>

int main() {
    int fib1 = 1, fib2 = 1;
    int n_fib;
    printf("Введите натуральное число => ");
    scanf("%d", &n_fib);
    printf("fib => %d\nfib => %d\n", fib1, fib2);

    int numb_i = 0;
    while (numb_i < n_fib-2) {
        int fib_sum = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib_sum;
        printf("fib => %d\n", fib2);
        numb_i++;
    }
    return 0;
}
