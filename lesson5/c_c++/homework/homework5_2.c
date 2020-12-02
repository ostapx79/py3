//: lesson5/c_c++/homework/homework5_2.c
// Напишите процедуру, которая выводит на экран все делители переданного ей
// числа (в одну строку).
#include <stdio.h>

void divisors(int numb_i) {
    int numb_res = numb_i;
    while (numb_i > 0) {
        if (numb_res % numb_i == 0)
            printf("divisors -> %d ", numb_i);
        numb_i--;
    }
}

int main() {
    int numb_n;
    printf("Введите натуральное число -> ");
    scanf("%d", &numb_n);
    divisors(numb_n);
    printf("\n");
    return 0;
}
