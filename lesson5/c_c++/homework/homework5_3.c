//: lesson5/c_c++/homework/homework5_3.c
// Напишите процедуру, выводит на экран в столбик все цифры переданного ей
// числа, начиная с первой.
#include <stdio.h>

void numbRes(int numb_i) {
    int numb = 1;
    while (numb <= numb_i) {
        printf("numb res -> %d\n", numb);
        numb++;
    }
}

int main() {
    int numb_x;
    printf("Введите число -> ");
    scanf("%d", &numb_x);
    numbRes(numb_x);
    return 0;
}
