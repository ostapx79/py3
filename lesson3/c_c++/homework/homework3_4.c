#include <stdio.h>

int main() {
    int months;

    printf("Введите число месяца => ");
    scanf("%d", &months);

    printf("Значение года, ");
    if ((months >= 1 && months < 3) || months == 12) {
        printf("зима.\n");
    } else if (months >= 3 && months < 6) {
        printf("весна.\n");
    } else if (months >= 6 && months < 9) {
        printf("лето.\n");
    } else if (months >= 9 && months < 12) {
        printf("осень.\n");
    } else {
        printf("Число такого месяца нету!\n");
    }

    return 0;
}
