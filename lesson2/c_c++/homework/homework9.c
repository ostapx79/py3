#include <stdio.h>

int main()
{
    // Вычисляем значнение целечисленной переменной first_numb=26 и
    // second_numb=6.
    int first_numb, second_numb, third_num;

    first_numb = 26;
    second_numb = 6;

    third_num = first_numb % second_numb + second_numb;
    printf("third_num => %d\n", third_num); // result: 8

    third_num = first_numb / second_numb + first_numb;
    printf("third_num => %d\n", third_num); // result: 30

    second_numb = first_numb / second_numb;
    third_num = first_numb / second_numb;
    printf("third_num => %d\n", third_num); // result: 6

    second_numb = 6;
    second_numb = first_numb / second_numb + second_numb;
    third_num = first_numb % second_numb + first_numb;
    printf("third_num => %d\n", third_num); // result: 32

    second_numb = 6;
    second_numb = first_numb % second_numb + 4;
    third_num = first_numb % second_numb + 1;
    printf("third_num => %d\n", third_num); // result: 7

    second_numb = 6;
    second_numb = first_numb / second_numb;
    third_num = first_numb % (second_numb + 1);
    printf("third_num => %d\n", third_num); // result: 2

    second_numb = 6;
    second_numb = first_numb % second_numb;
    third_num = first_numb / (second_numb + 1);
    printf("third_num => %d\n", third_num); // result: 26

    return 0;
}
