#include <stdio.h>

int main()
{
    // Вычисляем значнение целечисленной переменной first_numb=26 и
    // second_numb=6.
    int first_numb, second_numb, trihd_numb;

    first_numb = 26;
    second_numb = 6;

    second_numb = first_numb % second_numb + 4;
    trihd_numb = first_numb % second_numb + 1;
    printf("trihd_numb => %d\n", trihd_numb); // result: 7

    trihd_numb = first_numb % second_numb + second_numb;
    printf("trihd_numb => %d\n", trihd_numb); // result: 8

    trihd_numb = first_numb / second_numb + first_numb;
    printf("trihd_numb => %d\n", trihd_numb); // result: 30

    second_numb = first_numb / second_numb;
    trihd_numb = first_numb / second_numb;
    printf("trihd_numb => %d\n", trihd_numb); // result: 6

    second_numb = first_numb / second_numb + second_numb;
    trihd_numb = first_numb % second_numb + first_numb;
    printf("trihd_numb => %d\n", trihd_numb); // result: 32

    second_numb = first_numb / second_numb;
    trihd_numb = first_numb % (second_numb + 1);
    printf("trihd_numb => %d\n", trihd_numb); // result: 2

    second_numb = first_numb % second_numb;
    trihd_numb = first_numb / (second_numb + 1);
    printf("trihd_numb => %d\n", trihd_numb); // result: 26

    return 0;
}
