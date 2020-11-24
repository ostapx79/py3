//: lesson4/c_c++/homework/homework4_30.c
// Совершенном называются числа, равное сумме всех своих делителей, меньших его
// самого (например: 6 = 1 + 2 + 3). Напишите программу, которая вводит
// натуральное число N, и определяет является ли число N совершенным.
#include <stdio.h>

int main() {
    int numb_i, numb_j, numb_s;
    printf("Введите число чтоб убедится что число совершенное => ");
    scanf("%d", &numb_j);
    numb_s = 0;
    for (numb_i = 1; numb_i < numb_j; numb_i++) {
        if (numb_j % numb_i == 0) {
            numb_s += numb_i;
        }
    }
    if (numb_j == numb_s) {
        printf("Совершенное число => %d\n", numb_j);
    } else {
        printf("Не совершенное число => %d\n", numb_j);
    }
    return 0;
}
