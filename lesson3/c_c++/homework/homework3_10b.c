//: lesson3/c_c++/homework/homework3_10b.c
#include <stdio.h>

int main() {
    float x, y;
    printf("Введите первую кординату => ");
    scanf("%f", &x);
    printf("Введите вторую когдинату => ");
    scanf ("%f", &y);

    if (x*x + y*y / 2 < 1 && x*x + y*y / 2 > -1) {
        printf("попали.\n");
    } else {
        printf("непопали.\n");
    }
}
