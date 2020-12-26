#include <stdio.h>
#include <stdlib.h>

int main()
{
    // генерируем пять случайных чисел, больше чем 80 и меньше чем 100;
    printf("%d\n", 80 + rand()%(100 - 80 + 1));
    printf("%d\n", 80 + rand()%(100 - 80 + 1));
    printf("%d\n", 80 + rand()%(100 - 80 + 1));
    printf("%d\n", 80 + rand()%(100 - 79));
    printf("%d\n", 80 + rand()%21);

    return 0;
}
