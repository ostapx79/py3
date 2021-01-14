// lesson6/c_c++/homework/homework6_10.c
#include <stdio.h>

int friendly_numb(int numb_1) {
    int i;
    int res_i = 0;
    for (i = 1; i < numb_1; i++) {
        if (numb_1 % i == 0) {
            res_i += i;
        }
    }
    return res_i;
}

void friendly_numbers(int numb_start) {
    int i, j;
    for (i= 1; i < numb_start; ++i) {
        int res_i = friendly_numb(i);
        for (j = 1; j < i; ++j) {
            int res_j = friendly_numb(j);

            if (res_i == j && res_j == i) {
                printf("дружественные числа\n");
                printf("res_i -> %d - res_j -> %d\n", res_i, res_j);
            }
        }
    }
}

int main() {
    int numb_start;
    numb_start = 7000;
    printf("Вычисляем дружественные числа от 1 до 7000!\n");
    friendly_numbers(numb_start);
    return 0;
}
