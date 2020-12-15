/*
 * lesson5/c_c++/homework/homework5_12.c
 * Напишите процедуру, которая определяет, верно ли, что переданное ей число -
 * простое. (Используйте изменяемые параметры).
 */
#include <stdio.h>

void primesNumber(int* numb_n) {
    int k = 2;
    while (*numb_n % k != 0) {
        ++k;
    }
    if (k == *numb_n) {
        printf("prime\n");
    } else {
        printf("no prime\n");
    }
}

int main() {
    int numb;
    printf("Введите натуральное число -> ");
    scanf("%d", &numb);
    primesNumber(&numb);
    return 0;
}
