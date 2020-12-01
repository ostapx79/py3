//: lesson5/c_c++/lesson5_4.c
#include <stdio.h>

void Swap(int* numb_a, int* numb_b) {
    int numb_c;
    numb_c = *numb_a;
    *numb_a = *numb_b;
    *numb_b = numb_c;
}

int main() {
    int numb_x = 2, numb_y = 3;
    Swap(&numb_x, &numb_y);
    printf("numb_x -> %d\nnumb_y -> %d\n", numb_x, numb_y);
    return 0;
}
