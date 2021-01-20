/* lesson6/c_c++/homework/homework12.c
 * Простое число называется гиперпростым, если любое число, получающееся
 * откидываем нескольких цифр с конца, тоже является простым. Например 733 -
 * гиперпростое, так как оно само, числа 73 и 7 - простые. Напишите логическую
 * функцию, которая определяет, верно ли, что число N - гиперпростое.
 * Используйте уже готовую функцию is_prime.
 */
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int numb) {
    int res = 2;
    while (res * res <= numb && numb % res != 0) {
            res++;
    }
    return (res * res > numb);
}

int hyper_simple(int numb) {
    int i = 1;
    int res = 0;
    int res_1 = 0;
    while (numb > i) {
        res = is_prime(numb % 10);
        if (res == 1) {
            res_1 += res;
        }
        numb /= 10;
    }
    return res_1;
}

int main() {
    int numb_n = 733;
    int result = hyper_simple(numb_n);
    if (result == 3) {
        printf("hyper_simple -> %d\n", numb_n);
    } else {
        printf("Простое но не гиперпростое число!\n");
    }
    return 0;
}
