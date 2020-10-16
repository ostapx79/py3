#include <stdio.h>
#include <math.h>

int main()
{
    // Напишите программу, которая вводит радиус круга и вычисляет его площадь и
    // длину окржности.
    double radius, aria, circumference;
    printf("Введите радиус круга\n");
    scanf("%lf", &radius);

    aria = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;
    printf("%.3lf\n%.3lf\n", aria, circumference);

    return 0;
}
