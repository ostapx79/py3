//: lesson4/c_c++/homework/homework4_14.c
// Напишите программу, которая считывает сумму чифр введеного числа.
#include <stdio.h>

int main() {
    int numb;
    printf("Введите натуральное число => ");
    scanf("%d", &numb);

    int numb_j = 0;
    int numb_i = 1;
    while (numb_i <= numb) {
        numb_j += numb_i;
        printf("numb_j => %d => %d\n", numb_i, numb_j);
        numb_i++;
    }
    printf("Сумма введеного числа => %d\n", numb_j);
    return 0;
}
