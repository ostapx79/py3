//: lesson4/c_c++/homework/homework4_19.c
#include <stdio.h>

int main() {
    int numb_a = 50, numb_b = 130;

    while (numb_a != 0 && numb_b != 0) {
        if (numb_a > numb_b) {
            numb_a %= numb_b;
            printf("numb_a => %d\n", numb_a);
        } else {
            numb_b %= numb_a;
            printf("numb_b => %d\n", numb_b);
        }
    }
    return 0;
}
