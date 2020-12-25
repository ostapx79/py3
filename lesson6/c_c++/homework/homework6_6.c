/*
 * lesson6/c_c++/homework/homework6_6.c
 * Напишите функцию, которая моделирует бросание двух игральных кубиков (на
 * каждом может выпасть от 1 до 6 очков). (Используйте генератор псевдослучайных
 * чисел).
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pseudo_random_number(int numb_first, int numb_second) {
    srand(time(NULL));
    numb_first = 1 + rand() % 6;
    numb_second = 2 +rand() % 6;
    int result = numb_first + numb_second;
    return result;
}

int main(int argc, char* argv[]) {
    int first_shot, second_throw;
    printf("%d\n", pseudo_random_number(first_shot, second_throw));
    return 0;
}
