//: lesson4/c_c++/homework/homework4_21c.c
// a         | 6365133
// b         | 11494962
// НОД(a, b) | 171
// шаги-1    | 29
// шаги-2    | 13
#include <stdio.h>

int main() {
    int numb1 = 6365133;
    int numb2 = 11494962;
    int count1 = 0;
    while (numb1 != numb2) {
        if (numb1 > numb2) {
            numb1 -= numb2;
        } else {
            numb2 -= numb1;
        }
        ++count1;
    }
    printf("numb1 => %d\n", numb1);
    printf("numb2 => %d\n", numb2);
    printf("count1 => %d\n", count1);

    int numb3 = 6365133;
    int numb4 = 11494962;
    int count2 = 0;
    while (numb3 != 0 && numb4 != 0) {
        if (numb3 > numb4) {
            numb3 %= numb4;
        } else {
            numb4 %= numb3;
        }
        count2++;
    }
    printf("numb3 => %d\n", numb3);
    printf("numb4 => %d\n", numb4);
    printf("count2 => %d\n", count2);
}
