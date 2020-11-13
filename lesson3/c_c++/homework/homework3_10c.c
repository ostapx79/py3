//: lesson3/c_c++/homework/homework3_10c.c
#include <stdio.h>

int main() {
    float x, y;
    printf("Введите первую координату => ");
    scanf("%f", &x);
    printf("Введите вторую координату => ");
    scanf("%f", &y);

    if (x <= 0 && y <= 0 && y <= -x) {
        printf("попали.\n");
    } else {
        printf("непопали.\n");
    }
    return 0;
}
