#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Напишите программу, которая вводит два целых числа, a и b (a < b), и
    // выводит на экран 5 случаных целых чисел на отрезке [a, b].

    srand(time(NULL));
    int first_numb, second_numb, output_on_display; 

    // Получаем от пльзователя два целых числа.
    printf("Введите перевое целое число => ");
    scanf("%d", &first_numb);
    printf("Введите второе целое число => ");
    scanf("%d", &second_numb);

    printf("%d\n", first_numb + rand()%(second_numb - first_numb + 1));
    printf("%d\n", first_numb + rand()%(second_numb - first_numb + 1));
    printf("%d\n", first_numb + rand()%(second_numb - first_numb + 1));
    printf("%d\n", first_numb + rand()%(second_numb - first_numb + 1));
    printf("%d\n", first_numb + rand()%(second_numb - first_numb + 1));

    return 0;
}

