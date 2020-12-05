//: lesson5/c_c++/homework/homework5_4.c
// *Напишите процедуру, которая выводит на экран запись переданного ей числа в
// римской системы счисления.
#include <stdio.h>

void romanNumerals(int numb_i) {
    if (numb_i > 0 && numb_i < 4) {
        for (int numb_j = 1; numb_j <= numb_i; numb_j++) {
            printf("I");
        }
    } else if (numb_i == 4) {
        printf("IV");
    } else if (numb_i > 4 && numb_i < 9) {
        numb_i -= 5;
        printf("V");
        for (int i = 1; i <= numb_i; i++) {
            printf("I");
        }
    } else if (numb_i == 5) {
        printf("V");
    } else if (numb_i == 9) {
        printf("IX");
    } else if ( numb_i == 10) {
        printf("X");
    }
}

int main() {
    int numb_n;
    printf("Введите число -> ");
    scanf("%d", &numb_n);
    romanNumerals(numb_n);
    printf("\n");
    return 0;
    // Программа не допилена до конца!
}
