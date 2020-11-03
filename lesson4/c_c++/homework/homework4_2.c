#include <stdio.h>
#include <stdlib.h>

int main() {
    int value_a, value_b, value_c = 0;

    printf("Введите первое значение => ");
    scanf("%d", &value_a);
    printf("Введите второе значение => ");
    scanf("%d", &value_b);
    if (abs(value_a) > abs(value_b)) {
        int tmp = value_a;
        value_a = value_b;
        value_b = tmp;
        printf("value_a = >%d\n value_b =>%d\n", value_a, value_b);
    }
    for (int i = 0; i < abs(value_a); i++) {
        if ((value_a >= 0 && value_b >= 0) || (value_a < 0 && value_b < 0)) {
            value_c += abs(value_b);
        } else {
            value_c -= abs(value_b);
        }
    }
    printf("Произведение двух чисел => %d\n", value_c);

    return 0;
}
