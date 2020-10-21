#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{ 
    // Нпишите програму, которая моделирует бросания двух кубиков: при запуске
    // выводит случайное число в диапазоне от 2 до 12.

    srand(time(NULL));
    int first_die_value, value_of_the_second_die, value_of_two_dice;
    first_die_value = 2;
    value_of_the_second_die = 12;
    value_of_two_dice = first_die_value + rand()%(value_of_the_second_die - first_die_value + 1);

    std::cout << "Результат после бросание двух кубиков => " << value_of_two_dice << std::endl;

    return 0;
}
