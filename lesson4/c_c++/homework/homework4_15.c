//: lesson4/c_c++/homework/homework4_15.c
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
            printf("Числа разнные.\n");
        }
    } else if (entered_numb > 100 && entered_numb < 1000) {
        int result1 = entered_numb / 10 % 10;
        int result2 = entered_numb / 100;
        if (result1 == result2) {
            printf("Первые две цыфры одинаковы.\n");
        } else {
            printf("Первые две цыфры неодинаковы.\n");
        }
    } else {
        int result1 = entered_numb / 100 % 10;
        int result2 = entered_numb / 1000;
        if (result1 == result2) {
            printf("Первые две цыфры одиноковы.\n");
        } else {
            printf("Первые две цыфры неодинаковы.\n");
        }
    }
    return 0;
}
