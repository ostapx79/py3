#include <stdio.h>
#include <math.h>

int main()
{
    int coordinate_x1, coordinate_x2, coordinate_y1, coordinate_y2, distance;

    printf("Введите координата x1 - ");
    scanf("%d", &coordinate_x1);
    printf("Введите координата x2 - ");
    scanf("%d", &coordinate_x2);
    printf("Введите координата y1 - ");
    scanf("%d", &coordinate_y1);
    printf("Введите координата y2 - ");
    scanf("%d", &coordinate_y2);

    distance = sqrt(pow(coordinate_x2 - coordinate_x1, 2) + pow(coordinate_y2 - coordinate_y1, 2));

    printf("Растояние между координаты двух точек на числовом оси - %d\n", distance);

    return 0;
}
