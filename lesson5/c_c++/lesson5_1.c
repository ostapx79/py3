//: lesson5/c_c++/lesson5_1.c
#include <stdio.h>

void Error() {
    printf("ОШИБКА! Число должно быть больше чем ноль.\n");
}

void correct_answer() {
    printf("ПРАВИЛЬНО! Ответ больше чем ноль.\n");
}

int main() {
    int value_numb;
    printf("Введите натуральное число больше чем ноль => ");
    scanf("%d", &value_numb);

    if (value_numb < 0) {
        Error();
    } else {
        correct_answer();
    }
    return 0;
}
