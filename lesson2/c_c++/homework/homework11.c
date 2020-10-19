#include <stdio.h>

int main()
{
    // Напишите программу, каторая вводит трехзначное число и разбивает ее на
    // цифры, при вводе числа 123 программа должна вывести 1,2,3.
    int first_value, second_value1, second_value2, second_value3;

    printf("Введите трехзначное число\n");
    scanf("%d", &first_value);

    second_value1 = first_value / 100;
    second_value2 = first_value / 10 % 10;
    second_value3 = first_value % 10;

    printf("%d,%d,%d\n", second_value1, second_value2, second_value3);
    
    return 0;
}
