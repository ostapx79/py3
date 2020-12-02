//: lesson5/c_c++/homework/homework5_test.c
#include <stdio.h>

int main() {
    int numb_n = 6;
    int numb_res = numb_n;
    while (numb_n > 0) {
//        printf("%d\n", numb_res);
//        printf("%d\n", numb_n);
        if (numb_res % numb_n == 0) {
            printf("%d ", numb_n);
        }
        numb_n--;
    }
    printf("\n");
    return 0;
}
