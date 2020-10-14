#include <stdio.h>
#include <stdlib.h>

int main()
{
    // генерируем случайные пять целых чисел, от 80 до 100;
    srand(3);

    printf("%d\n", 80 + rand()%(100 - 79));
    printf("%d\n", 80 + rand()%(100 - 79));
    printf("%d\n", 80 + rand()%(100 - 80 + 1));
    printf("%d\n", 80 + rand()%21);
    printf("%d\n", 80 + rand()%21);

    return 0;
}
