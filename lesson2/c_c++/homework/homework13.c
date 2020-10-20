#include <stdio.h>
#include <math.h>

int main()
{
    // Напишите програму, которая округляет вещественное число до ближайшево
    // целогоa.
    
    float float_value;
    int int_value1, int_value2;
    printf("Введите вещественное число => ");
    scanf("%f", &float_value);

    int_value1 = floor(float_value);
    int_value2 = ceil(float_value);

    printf("Ближайшее челое в меньшую сторону => %d\n", int_value1);
    printf("Ближайшее челое в большую сторону => %d\n", int_value2);
    printf("Ближайшее челое число => %.f\n", float_value);

    return 0;
}
