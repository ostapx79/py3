#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    float first_value, second_value;

    scanf("%f", &first_value);
    scanf("%f", &second_value);
    printf("%.2f\n", first_value + (second_value - first_value) * rand() / RAND_MAX);

    return 0;
}
