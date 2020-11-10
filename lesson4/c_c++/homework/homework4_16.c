//: lesson4/c_c++/homework/homework4_16.c
// Напишите программу, которая определяет, верно ли, что введеное число состоите
// из одинаковых цыфыр (222 или 333).
#include <stdio.h>

int main() {
    int entered_numb;
    printf("Введите натуральное число => ");
    scanf("%d", &entered_numb);

    if (entered_numb > 0 && entered_numb < 100) {
        int result1 = entered_numb % 10;
        int result2 = entered_numb / 10 % 10;
        if (result1 == result2) {
            printf("Оба числа одинаковы.\n");
        } else {
            printf("Числа неодинаковы.\n");
        }
    } else if (entered_numb > 100 && entered_numb < 1000) {
        int result1 = entered_numb % 10;
        int result2 = entered_numb / 10 % 10;
        int result3 = entered_numb / 100;
        if (result1 == result2 && result3 == result1) {
            printf("Все числа одинаковы.\n");
        } else {
            printf("Числа неодинаковы.\n");
        }
    } else {
        int result1 = entered_numb % 10;
        int result2 = entered_numb / 10 % 10;
        int result3 = entered_numb / 100 % 10;
        int result4 = entered_numb / 1000;
        if (result1 == result2 && result3 == result4 && result1 == result3 && result2 == result4) {
            printf("Все числа одинаковы.\n");
        } else {
            printf("Числа неодинаковы.\n");
        }
    }
    return 0;
}
