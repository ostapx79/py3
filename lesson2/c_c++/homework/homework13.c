#include <stdio.h>
#include <math.h>

int main()
{
    // Напишите программу, которая округляет вещественное число до ближайшего
    // целого.
    
    float float_value;
    int int_value1, int_value2;
    printf("Введите вещественное число => ");
    scanf("%f", &float_value);

    int_value1 = floor(float_value);
    int_value2 = ceil(float_value);

    printf("Ближайшее целое в меньшую сторону => %d\n", int_value1);
    printf("Ближайшее целое в большую сторону => %d\n", int_value2);
    printf("Ближайшее целое число => %.f\n", float_value);

    return 0;
}
