#include <stdio.h>
#include <math.h>

int main()
{
    // матетические функции для округления вещественных чисел
    float x;
    x = floor(-1.6);
    printf("x=%.f\n", x); // result: -2
    x = ceil(-1.6);
    printf("x=%.f\n", x); // result: -1
    x = floor(1.6);
    printf("x=%.f\n", x); // result: 1
    x = ceil(1.6);
    printf("x=%.f\n", x); // result: 2

    return 0;
}
