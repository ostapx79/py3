#include <stdio.h>

int main() {
    // Покажите, что приведенная программа не всегда верно определяет
    // максимальное из трех чисел, записынных в переменные a, b и c:

    int value_a, value_b, value_c;

    value_a = 5;
    value_b = 4;
    value_c = 9;

    if (value_a > value_b) {
        printf("value_a => %d\n", value_a);
    } else {
        printf("value_b => %d\n", value_b);
    }
    if (value_c > value_b) {
        printf("value_c => %d\n", value_c);
    } else {
        printf("value_b => %d\n", value_b);
    }
    // Программа будет не коректно работать по той простой причине что будет
    // выводится на экран, не только максимальное значение переменной но и
    // переменной каторая ваще не должна выводится. Напишим коректную программу.

    if (value_a > value_b && value_b > value_c) {
        printf("value_a => %d\n", value_a);
    } else if (value_c < value_b) {
        printf("value_b => %d\n", value_b);
    } else {
        printf("value_c => %d\n", value_c);
    }

    return 0;
}
