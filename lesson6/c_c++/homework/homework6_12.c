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

int main() {
    int numb_n = 733;
    int result = is_prime(numb_n);
    printf("%d\n", result);
    return 0;
}
