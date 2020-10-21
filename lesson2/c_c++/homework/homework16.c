#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Напишите программу, которая случайным образом выбирает дежурных: выводит
    // случайным образом два разлиных числа в диапозоне от 1 до N, где N -
    // количество учиников вашего класса. Какая проблемма при этом может
    // возникнуть?

    srand(time(NULL));
    int first_student, number_of_students, first_attendant, second_attendants;

    first_student = 1;
    number_of_students = 30;

    first_attendant = first_student + rand()%(number_of_students - first_student + 1);
    second_attendants = first_student + rand()%(number_of_students - first_student + 1);

    printf("Севодня первый дежурный будет ученик под номером => %d\n", first_attendant);
    printf("Севодня второй дежурный будет ученик под номером => %d\n", second_attendants);

    // Проблемма в том что один учиник может быть дежурным несколько раз подряд,
    // или может быть такой случай что он может попасть два случайных случай
    // может быть одинаковы. За один раз.

    return 0;
}
