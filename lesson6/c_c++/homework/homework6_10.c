// lesson6/c_c++/homework/homework6_10.c
#include <stdio.h>

int friendly_numb1(int numb_1) {

    int i;
    int res_i = 0;
    for (i = 1; i < numb_1; i++) {
        if (numb_1 % i == 0) {
            res_i += i;
        }
    }
    return res_i;

}

int friendly_numb2(int numb_2) {

    int j;
    int res_j = 0;
    for (j = 1; j < numb_2; j++) {
        if (numb_2 % j == 0) {
            res_j += j;
        }
    }
    return res_j;
    
}

int main() {
    int numb_start;
    numb_start = 10000;
    
    int i, j;
    for (i= 1; i < numb_start; ++i) {
        int res_i = friendly_numb1(i);
        for (j = 1; j < i; ++j) {
            int res_j = friendly_numb2(j);

            if (res_i == j && res_j == i) {
                printf("дружественные числа\n");
                printf("%d - %d\n", res_i, res_j);
            }
        }
    }
    return 0;
}
