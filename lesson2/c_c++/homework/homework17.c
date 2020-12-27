#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Напишите программу, которая вводит два вещественных числа, a и b (a < b),
    // и выводит на экран 5 случайных вещественные числа [a, b].
    
    srand(time(NULL));
    float first_float_numb, second_float_numb;

    printf("Введите первое вещественное число => ");
    scanf("%f", &first_float_numb);
    printf("Введите второе вещественное число => ");
    scanf("%f", &second_float_numb);

    printf("Первое случайное вещественное число => %.2f\n", first_float_numb + (second_float_numb - first_float_numb) * rand() / RAND_MAX);
    printf("Второе случайное вещественное число => %.2f\n", first_float_numb + (second_float_numb - first_float_numb) * rand() / RAND_MAX);
    printf("Третие случайное вещественное число => %.2f\n", first_float_numb + (second_float_numb - first_float_numb) * rand() / RAND_MAX);
    printf("Четвертое случайное вещественное число => %.2f\n", first_float_numb + (second_float_numb -first_float_numb) * rand() / RAND_MAX);
    printf("Пятое случайное вещественное число => %.2f\n", first_float_numb + (second_float_numb - first_float_numb) * rand() / RAND_MAX);

    return 0;
}
