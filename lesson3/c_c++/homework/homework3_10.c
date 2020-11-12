//; lesson3/c_c++/homework/homework3_10.c
// Напишите программу, которая вводит кордионанаты на полоскости и определяет,
// попала ли это точка в заштриховануч полоскасть.
#include <stdio.h>
#include <math.h>

int main() {
    int numb_x, numb_y;
    printf("Введите первое число => ");
    scanf("%d", &numb_x);
    printf("Введите второе число => ");
    scanf("%d", &numb_x);

    if (sqrt(numb_x - 1) + sqrt(numb_y) <= 1) {
        printf("попали\n");
    } else {
        printf("непопали\n");
    }
    return 0;
}
