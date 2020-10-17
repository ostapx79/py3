#include <stdio.h>

int main()
{
    int first_numb, second_numb, trihd_numb;
    first_numb = -22;
    second_numb = 4;

    trihd_numb = first_numb % second_numb + second_numb;
    printf("trihd_numb => %d\n", trihd_numb);

    trihd_numb = first_numb / second_numb + first_numb;
    printf("trihd_numb => %d\n", trihd_numb);

    second_numb = first_numb / second_numb;
    trihd_numb = first_numb / second_numb;
    printf("trihd_numb => %d\n", trihd_numb);

    second_numb = first_numb / second_numb + second_numb;
    trihd_numb = first_numb % second_numb + first_numb;
    printf("trihd_numb => %d\n", trihd_numb);

    second_numb = first_numb % second_numb + 4;
    trihd_numb = first_numb % second_numb + 1;
    printf("trihd_numb => %d\n", trihd_numb);

    second_numb = first_numb / second_numb;
    trihd_numb = first_numb % (second_numb + 1);
    printf("trihd_numb => %d\n", trihd_numb);

    second_numb = first_numb % second_numb;
    trihd_numb = first_numb / (second_numb + 1);
    printf("trihd_numb => %d\n", trihd_numb);

    return 0;
}
