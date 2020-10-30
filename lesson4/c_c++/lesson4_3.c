#include <stdio.h>

int main() {
    int number;
    number = 0;
    int number_s;
    scanf("%d\n", &number_s);

    int number_i = 0;
    while (number_i < number_s) {
        int number_x;
        scanf("%d\n", &number_x);
        number += number_x;
        number_i += 1;
    }
    printf("sum of numbers is %d\n", number);

    return 0;
}
