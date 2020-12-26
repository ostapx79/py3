#include <stdio.h>

int main()
{
    // вещественные значения
    float x;
    x = 123.456;

    // При выводе на экран вещественных значений в языке Си можно использовать
    // разные форматы.
    // %f - с фиксированной точкой, по умолчанию выводятся 6 знаков дробной
    // части;
    // %e - научный формат, предназначенный для записи как очень больших, так и
    // очень маленьких чисел;
    // %g - формат вывода выбирается автоматически в зависимо от значения числа.

    printf("%f\n", x); // 123.456001
    printf("%e\n", x); // 1.234560e+02
    printf("%g\n", x); // 123.456

    printf("%10.2f\n", x);
    printf("%10.2e\n", x);
    printf("%10.2g\n", x);

    return 0;
}
