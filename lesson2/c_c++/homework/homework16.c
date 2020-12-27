#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Напишите программу, которая случайным образом выбирает дежурных: выводит
    // случайным образом два различных числа в диапазоне от 1 до N, где N -
    // количество учеников вашего класса. Какая проблема при этом может
    // возникнуть?

    srand(time(NULL));
    int first_student, number_of_students, first_attendant, second_attendants;

    first_student = 1;
    number_of_students = 30;

    first_attendant = first_student + rand()%(number_of_students - first_student + 1);
    second_attendants = first_student + rand()%(number_of_students - first_student + 1);

    printf("Севодня первый дежурный будет ученик под номером => %d\n", first_attendant);
    printf("Севодня второй дежурный будет ученик под номером => %d\n", second_attendants);

    // Проблема в том что один ученик может быть дежурным несколько раз подряд,
    // или может быть такой случай что он может попасть два случайных случай
    // может быть одинаковы. За один раз.

    return 0;
}
