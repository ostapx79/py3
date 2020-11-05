//: c_c++/homework/homework4_8.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int numb_rand;
    float result, numb_y = 1.f;
    printf("Введите целое число => ");
    scanf("%d", &numb_rand);
    
    int numb_i = 0, numb_x;
    while (numb_i <= numb_rand) {
        result = numb_x + (numb_y - numb_x) * rand() / RAND_MAX;
        printf("Псевдослучаное число от 0 до 1 => %.2f\n", result);
        numb_i++;
    }
    return 0;
}
