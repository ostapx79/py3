/*
 * lesson6/c_c++/homework/homework6_3.c
 * Напишите функцию, которая вычисляет количество цифр числа.
 */
#include <stdio.h>

int amountDigitsNumber(int numb_n) {
    int count = 1;
    while ((numb_n /= 10) > 0) {
        count++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    int numb;
    printf("Введите число -> ");
    scanf("%d", &numb);
    printf("number of digits a of number -> %d\n", amountDigitsNumber(numb));
    return 0;
}
