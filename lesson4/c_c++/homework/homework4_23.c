//: lesson4/c_c++/homework/homework4_23.c
// Напишите программу, которая вводит с клавиатуры числа до тех пор, пока не
// будет введено ноль. В конце программы на экран выводится сумма и произведения
// введенных чисел (не считая 0).
#include <stdio.h>

int main() {
    int numb_1;
    printf("Введите число => ");
    scanf("%d", &numb_1);

    while (numb_1) {
        numb_1 += numb_1;
    }
    printf("numb_1 => %d\n", numb_1);
    return 0;
}
