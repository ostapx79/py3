//: lesson4/c_c++/homework/homework4_22.c
// a         | 358853
// b         | 691042
// НОД(a, b) | 1111
// шаги-1    | 22
// шаги-2    | 6
#include <stdio.h>

int main() {
    int numb_a1 = 358853;
    int numb_b1 = 691042;
    
    int count1 = 0;
    while (numb_a1 != numb_b1) {
        if (numb_a1 > numb_b1) {
            numb_a1 -= numb_b1;
        } else {
            numb_b1 -= numb_a1;
        }
        ++count1;
    }
    printf("numb_a1 => %d\n", numb_a1);
    printf("numb_b1 => %d\n", numb_b1);
    printf("count => %d\n", count1);

    int numb_a2 = 358853;
    int numb_b2 = 691042;

    int count2 = 0;
    while (numb_a2 != 0 && numb_b2 != 0) {
        if (numb_a2 > numb_b2) {
            numb_a2 %= numb_b2;
        } else {
            numb_b2 %= numb_a2;
        }
        ++count2;
    }
    printf("numb_a2 => %d\n", numb_a2);
    printf("numb_b2 => %d\n", numb_b2);
    printf("count2 => %d\n", count2);
    return 0;
}
