/*
 * lesson6/c_c++/homework/homework6_test_a.c
 */
#include <stdio.h>

int amountDigitsNumber(int numb_n) {
    int count = 0;
    int res = 1;
    while (count < numb_n) {
        if (numb_n != 0) {
            numb_n /= 10;
            res++;
        }
        count++;
    }
    return res;
}

int main(int argc, char** argv) {
    int numb;
    printf("Введите число -> ");
    scanf("%d", &numb);

    printf("number of digits a of number -> %d\n", amountDigitsNumber(numb));
    return 0;
}
