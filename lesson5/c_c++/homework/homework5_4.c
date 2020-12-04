//: lesson5/c_c++/homework/homework5_4.c
// *Напишите процедуру, которая выводит на экран запись переданного ей числа в
// римской системы счисления.
#include <stdio.h>

void romanNumerals(int numb_i) {
    if (numb_i > 0 && numb_i < 4) {
        if (numb_i == 1) {
            printf("I\n");
        } else if (numb_i == 2) {
            printf("II\n");
        } else {
            printf("III\n");
        }
    } else if (numb_i == 4) {
        printf("IV\n");
    } else if (numb_i > 4 && numb_i < 9) {
        if (numb_i == 5) {
            printf("V\n");
        } else if (numb_i == 6) {
            printf("VI\n");
        } else if (numb_i == 7) {
            printf("VII\n");
        } else {
            printf("VIII\n");
        }
    }
}

int main() {
    int numb_n;
    printf("Введите число -> ");
    scanf("%d", &numb_n);
    romanNumerals(numb_n);
    return 0;
    // Программа не допилена до конца!
}
