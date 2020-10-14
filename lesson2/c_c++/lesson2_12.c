#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    printf("%d\n", 80 + rand()%(100 - 80 + 1));
    printf("%d\n", 80 + rand()%(100 - 79));
    printf("%d\n", 80 + rand()%21);
    printf("%d\n", 80 + rand()%21);
    printf("%d\n", 80 + rand()%21);

    return 0;
}
