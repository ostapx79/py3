//: lesson4/c_c++/homework/homework4_20.c
// Напишите программу, использующию модифицированый алгоритм евклида: нужно
// помянять большее число на остаток от деления большого на меньшее до тех пор,
// пока этот остаток станет нулем, тогда второе число и есть НОД.
#include <stdio.h>

int main() {
    int numb1 = 50;
    int numb2 = 180;

    while (numb1 != numb2) {
        if (numb1 > numb2) {
            numb1 -= numb2;
            printf("numb1 => %d\n", numb1);
        } else {
            numb2 -= numb1;
            printf("numb2 => %d\n", numb2);
        }
    }
    printf("numb_end => %d\n", numb1);
    return 0;
}
