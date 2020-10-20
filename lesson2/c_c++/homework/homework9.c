#include <stdio.h>

int main()
{
    // Вычисляем значнение целечисленной переменной first_numb=26 и
    // second_numb=6.
    int first_numb, second_numb, third_numb;

    first_numb = 26;
    second_numb = 6;

    third_numb = first_numb % second_numb + second_numb;
    printf("third_numb => %d\n", third_numb); // result: 8

    third_numb = first_numb / second_numb + first_numb;
    printf("third_numb => %d\n", third_numb); // result: 30

    second_numb = first_numb / second_numb;
    third_numb = first_numb / second_numb;
    printf("third_numb => %d\n", third_numb); // result: 6

    second_numb = 6;
    second_numb = first_numb / second_numb + second_numb;
    third_numb = first_numb % second_numb + first_numb;
    printf("third_numb => %d\n", third_numb); // result: 32

    second_numb = 6;
    second_numb = first_numb % second_numb + 4;
    third_numb = first_numb % second_numb + 1;
    printf("third_numb => %d\n", third_numb); // result: 3

    second_numb = 6;
    second_numb = first_numb / second_numb;
    third_numb = first_numb % (second_numb + 1);
    printf("third_numb => %d\n", third_numb); // result: 2

    second_numb = 6;
    second_numb = first_numb % second_numb;
    third_numb = first_numb / (second_numb + 1);
    printf("third_numb => %d\n", third_numb); // result: 26

    return 0;
}
