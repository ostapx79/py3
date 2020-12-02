//: lesson5/c_c++/homework5_1.c
#include <stdio.h>

void numberingValue(int numb_n) {
    while (numb_n > 0) {
        printf("numbering value -> %d\n", numb_n);
        numb_n--;
    }
}

void numbVal(int numb_i) {
    for (; numb_i > 0; numb_i--) {
        printf("numbering Value -> %d\n", numb_i);
    }
}

int main() {
    int numb_val;
    printf("Введите число -> ");
    scanf("%d", &numb_val);
    printf("\n");
    numberingValue(numb_val);
    printf("\n");
    numbVal(numb_val);
    return 0;
}
