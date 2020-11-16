//: lesson4/c_c++/homework/homework4_21d.c
// a         | 549868978
// b         | 298294835
// НОД(a, b) | 17
// шаги-1    | 265
// шаги-2    | 14
#include <stdio.h>

int main() {
    int numb_1 = 549868978;
    int numb_2 = 298294835;
    int count_1 = 0;
    while (numb_1 != numb_2) {
        if (numb_1 > numb_2) {
            numb_1 -= numb_2;
        } else {
            numb_2 -= numb_1;
        }
        count_1++;
    }
    printf("numb_1 => %d\n", numb_1);
    printf("numb_2 => %d\n", numb_2);
    printf("count_1 => %d\n", count_1);

    int numb_3 = 549868978;
    int numb_4 = 298294835;
    int count_2 = 0;
    while (numb_3 != 0 && numb_4 != 0) {
        if (numb_3 > numb_4) {
            numb_3 %= numb_4;
        } else {
            numb_4 %= numb_3;
        }
        count_2++;
    }
    printf("numb_3 => %d\n", numb_3);
    printf("numb_4 => %d\n", numb_4);
    printf("count_2 => %d\n", count_2);
}
