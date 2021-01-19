// lesson6/c_c++/homework/homework6_12.cpp
#include <stdio.h>

int is_prime(int numb) {
    int res_d = 2;
    while (res_d * res_d <= numb && numb % res_d != 0) {
        res_d++;
    }
    return (res_d * res_d > numb);
}

int main() {
    int numb = 1000;
    int i;
    for (i = 1; i < numb; i++) {
        int result = is_prime(i);
        if (result == 1) {
            printf("is_prime -> %d\n", i);
        }
    }
    return 0;
}
