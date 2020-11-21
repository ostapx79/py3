//: lesson4/c_c++/homework/homework4_26.c
// Напишите программу, которая натуральные числа A и N и вычисляет A^N.
#include <stdio.h>
#include <math.h>

int main() {
    int numb_a, numb_n;
    printf("Если хотите знать результат numb_a^numb_n!\n");
    printf("Введите натуральное число => ");
    scanf("%d", &numb_a);
    printf("Введите натуральное число => ");
    scanf("%d", &numb_n);

    printf("numb_a^numb_n => %d\n", (int)pow(numb_a, numb_n));
    return 0;
}
