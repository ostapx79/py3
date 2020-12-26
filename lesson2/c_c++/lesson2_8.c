#include <stdio.h>
#include <stdlib.h>

int main()
{
    // генерируем пять случайных чисел меньше 100;
    printf("%d\n", rand()%100);
    printf("%d\n", rand()%100);
    printf("%d\n", rand()%100);
    printf("%d\n", rand()%100);
    printf("%d\n", rand()%100);

    return 0;
}
