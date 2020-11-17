//: lesson4/c_c++/homework/homework4_22.c
// Напишите программу которая вводит с клавиатуры 10 чисел вычисляет их сумму
// и произведения.
#include <stdio.h>

int main() {
    int numb_1;
    printf("Введите десять чисел => ");
    scanf("%d", &numb_1);
    int count = 1;
    while (count != 10) {
        int numb_2 = 0;
        scanf("%d", &numb_2);
        numb_1 += numb_2;
        count++;
    }
    printf("sum_numb_1 => %d\n", numb_1);
    return 0;
}
