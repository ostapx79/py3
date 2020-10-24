#include <stdio.h>

int main()
{
    // Меняем заначения переменных, без дополнительное переменное.
    int first_variable, second_variable;

    printf("first_variable=");
    scanf("%d", &first_variable);
    printf("second_variable=");
    scanf("%d", &second_variable);

    first_variable = first_variable + second_variable;
    second_variable = first_variable - second_variable;
    first_variable = first_variable - second_variable;

    printf("first_variable=%d\nsecond_variable%d\n", first_variable, second_variable);

    return 0;
}
