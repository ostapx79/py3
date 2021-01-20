// lesson6/c_c++/homework/homework6_12a.c
#include <stdio.h>

int main() {
    int numb_t = 7;
    int i = 1;
    int res = 0;
    while (numb_t > i) {
        res = numb_t % 10;
        printf("%d\n", res);
        numb_t /= 10;
    }
    return 0;
}
