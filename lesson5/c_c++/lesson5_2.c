//: lesson5/c_c++/lesson5_2.c
// процедура с параметрами
#include <stdio.h>

void printBin(int numb_n) {
    int numb_k = 128;
    while (numb_k > 0) {
        printf("%d", numb_n / numb_k);
        numb_n = numb_n % numb_k;
        numb_k /= 2;
    }
}

int main() {
    printBin(99);
    printf("\n");
    return 0;
}
