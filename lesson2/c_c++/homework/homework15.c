#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Напишите программу, которая моделирует бросания двух кубиков: при запуске
    // выводит случайное число в диапазоне от 2 до 12.
    srand(time(NULL));
    int first_die_value, value_of_the_second_die, value_of_two_dice;
    first_die_value = 2;
    value_of_the_second_die = 12;
    value_of_two_dice = first_die_value + rand()%(value_of_the_second_die - first_die_value + 1);
    printf("Результат после бросание двух кубиков => %d\n", value_of_two_dice);

    return 0;
}
