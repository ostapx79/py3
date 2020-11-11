//: lesson4/c_c++/homework/homework4_18.c
#include <stdio.h>
#include <math.h>

int main() {
    int numb_pow1, numb_pow2;
    numb_pow1 = pow(2, 10);
    numb_pow2 = pow(2, 2);

    while (numb_pow1 >= numb_pow2) {
        if (numb_pow1 % 2 == 0) {
            printf("Четные числа => %d\n", numb_pow1);
        } else {
            printf("Неченые числа => %d\n", numb_pow1);
        }
        numb_pow1--;
    }

    int numb_i;
    int numb_j = pow(2, 2);
    for (numb_i = pow(2, 10); numb_i > numb_j-1; numb_i--) {
        if (numb_i % 2 == 0) {
            printf("Четное число => %d\n", numb_i);
        } else {
            printf("Нечтное число => %d\n", numb_i);
        }
    }
    return 0;
}
