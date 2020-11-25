//: lesson4/c_c++/homework/homework4_31.c
#include <stdio.h>

int main() {
    int numb_i, numb_j;
    numb_j = 100000;
    for (numb_i = 2; numb_i < numb_j; numb_i++) {
        int numb_s = 0;
        for (int numb_k = 1; numb_k < numb_i; numb_k++) {
            if (numb_i % numb_k == 0) {
                numb_s += numb_k;
            }
        }
        if (numb_s == numb_i) {
            printf("perfect => %d\n", numb_i);
        }
    }
    return 0;
}
