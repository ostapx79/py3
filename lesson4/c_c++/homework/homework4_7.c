#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int numb_rand, result;
    printf("Введите натуральное число => ");
    scanf("%d", &numb_rand);

    for (int numb_i = 1; numb_i <= numb_rand; numb_i++) {
        result = numb_i + rand()%(numb_rand - numb_i + 1);
        printf("Псевдослучайное числа => %d\n", result);
    }
    return 0;
}
