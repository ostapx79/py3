#include <stdio.h>
#include <stdlib.h>

int main()
{
    // генерируем пять случайных чисел, бельше чем 80 и менше чем 100;
    printf("%d\n", 80 + rand()%(100 - 80));
    printf("%d\n", 80 + rand()%(100 - 80));
    printf("%d\n", 80 + rand()%(100 - 80));
    printf("%d\n", 80 + rand()%(100 - 80));
    printf("%d\n", 80 + rand()%(100 - 80));

    return 0;
}
