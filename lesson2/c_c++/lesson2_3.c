#include <stdio.h>
#include <math.h>

int main()
{
    // Остаток от деление в Си и Си++ с целыми числа.
    int a, b, c, d;
    c = 85;
    a = c / 10; // результат 8 и остаток отбрасывается
    b = c % 10; // остаток от деление это 5
    d = pow(a, b); // возводим a в степень на b, результат: 3276 числа.8

    printf("a=%d\nb=%d\n", a, b);
    printf("d=%d\n", d);
    return 0;
}
