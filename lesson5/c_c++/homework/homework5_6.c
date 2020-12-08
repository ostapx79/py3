//: lesson5/c_c++/homework/homework5_6.c
// Напишите процедуру, которая выводит на экран запись числа, меньшего, чем
// 2^4=65536, в виде 4-х знаков в шестнадцатеричной системе счисления.
#include <stdio.h>

void numb_hex(int numb_hex) {
    printf("%04X\n", numb_hex);
}

int main() {
    int numb_n;
    printf("Введите число -> ");
    scanf("%d", &numb_n);
    numb_hex(numb_n);
    printf("\n");
    return 0;
}
