//: lesson4/c_c++/homework/homework4_23.c
// Напишите программу, которая вводит с клавиатуры числа до тех пор, пока не
// будет введено ноль. В конце программы на экран выводится сумма и произведения
// введенных чисел (не считая 0).
#include <stdio.h>
#include <stdbool.h>

int main() {
    int numb_1;
    printf("Введите число => ");
    scanf("%d", &numb_1);
    bool flag = true;

    while (flag) {
        int numb_2 = 0;
        printf("Введите число => ");
        scanf("%d", &numb_2);
        numb_1 += numb_2;
        if (numb_2 == 0) {
            flag = false;
        }
    }
    printf("numb_1 => %d\n", numb_1);
    return 0;
}
