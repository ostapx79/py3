#include <stdio.h>

int main()
{
    // Условный оператор на Си и Си++ превый урок.

    int first_numb, second_numb, max_numb;

    printf("Введите любое первое целое число => ");
    scanf("%d", &first_numb);
    printf("Введите любое второе целое число => ");
    scanf("%d", &second_numb);

    if (first_numb > second_numb){
        max_numb = first_numb;
    } else {
        max_numb = second_numb;
    }

    // Можно и без дополнительной переменой это написать.
    printf("Максимльное целое число из двух казынных => ");
    printf("%d\n", max_numb);
    return 0;
}
