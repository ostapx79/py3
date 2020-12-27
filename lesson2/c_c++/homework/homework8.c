#include <stdio.h>

int main()
{
    // Вычислите значение вещественной переменной c при a=2 и b=3.
    
    int a = 2, b = 3;
    float c;

    c = a + 1 / 3;
    printf("%f\n", c); // result: 2.000000
    printf("%.f\n", c); // result: 2

    c = a + 4 / 2 * 3 + 6;
    printf("%f\n", c); // result: 14.000000
    printf("%.f\n", c); // result: 14

    c = (a + 4) / 2 * 3;
    printf("%f\n", c); // result: 9.000000
    printf("%.f\n", c); // result: 9

    c = (a + 4) / (b + 3) * a;
    printf("%f\n", c); // result: 2.000000
    printf("%.f\n", c); // result: 2, как в Си++

    return 0;
}

