#include <stdio.h>

int main() {
    int value_a, value_b, value_c, value_d, value_e;

    printf("Введите пять разных значений, что-бы найти максимум и минимум\n");
    printf("value_a => ");
    scanf("%d", &value_a);
    printf("value_b => ");
    scanf("%d", &value_b);
    printf("value_c => ");
    scanf("%d", &value_c);
    printf("value_d => ");
    scanf("%d", &value_d);
    printf("value_e => ");
    scanf("%d", &value_e);

    printf("Максимальное значение\n");
    if (value_a > value_b && value_a > value_c) {
        printf("value_a => %d\n", value_a);
    } else if (value_b > value_c && value_b > value_d) {
        printf("value_b => %d\n", value_b);
    } else if (value_c > value_d && value_c > value_e) {
        printf("value_c => %d\n", value_c);
    } else if (value_d > value_e && value_d > value_a) {
        printf("value_d => %d\n", value_d);
    } else {
        printf("value_e => %d\n", value_e);
    }

    printf("Минимальное значение\n");
    if (value_a < value_b && value_a < value_c) {
        printf("value_a => %d\n", value_a);
    } else if (value_b < value_c && value_b < value_d) {
        printf("value_b => %d\n", value_b);
    } else if (value_c < value_d && value_c < value_e ) {
        printf("value_c => %d\n", value_c);
    } else if (value_d < value_e && value_d < value_a) {
        printf("value_d => %d\n", value_d);
    } else {
        printf("value_e => %d\n", value_e);
    }

    return 0;
}
