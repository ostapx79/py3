/*
 * :lesson6/c_c++/homework/homewor6_1.c
 * Напишите функцию, которая вычисляет максимум из трех чисел.
 */
#include <stdio.h>

int maxSumDigits(int first_value, int second_value, int trihd_value) {
    if (first_value > second_value && first_value > trihd_value) {
        return first_value;
    } else if (second_value > trihd_value && second_value > first_value) {
        return second_value;
    } else {
        return trihd_value;
    }
}

int main() {
    int numb_1, numb_2, numb_3;
    printf("Введите три числа -> ");
    scanf("%d %d %d", &numb_1, &numb_2, &numb_3);
    printf("Максимальное число -> %d\n", maxSumDigits(numb_1, numb_2, numb_3));
    return 0;
}
