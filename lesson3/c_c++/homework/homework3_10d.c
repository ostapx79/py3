//: lesson3/c_c++/homework/homework3_10d.c
#include <stdio.h>

int main() {
    float x, y;
    printf("Введите первую координату => ");
    scanf("%f", &x);
    printf("Введине вторую коокдинату => ");
    scanf("%f", &y);

    if ((x+1) * (x+1) + y*y / 2 > 1 &&
            (x-1) * (x-1) + y*y / 2 < 1 && x >= 0) {
        printf("попали.\n");
    } else {
        printf("непопали.\n");
    }
    return 0;
}
