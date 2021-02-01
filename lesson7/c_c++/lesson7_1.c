/*
 * lesson7/c_c++/lesson7_1.c
 * Ханойские башни
 */

#include <stdio.h>

void hanoi(int numb_i, int numb_k, int numb_m) {
    int numb_p;
    if (numb_i == 0) return;

    numb_p = 6 - numb_k - numb_m;
    hanoi(numb_i -1, numb_k, numb_p);
    printf("%d -> %d\n", numb_k, numb_m);
    hanoi(numb_i - 1, numb_p, numb_m);
}

int main() {
    hanoi(4, 1, 3);
    return 0;
}
