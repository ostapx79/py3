//: lesson4/c_c++/homework/homework4_21e.c
// a         | 17905514
// b         | 23108855
// НОД(a, b) | 3421
// шаги-1    | 56
// шаги-2    | 8
#include <stdio.h>

int main() {
    int numb1 = 17905514;
    int numb2 = 23108855;
    int count1 = 0;
    while (numb1 != numb2) {
        if (numb1 > numb2) {
            numb1 -= numb2;
        } else {
            numb2 -= numb1;
        }
        count1++;
    }
    printf("numb_1 => %d\n", numb1);
    printf("numb_2 => %d\n", numb2);
    printf("count_1 => %d\n", count1);

    int numb_3 = 17905514;
    int numb_4 = 23108855;
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
    return 0;
}
