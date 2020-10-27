#include <stdio.h>

int main() {
    int months;

    printf("Введите номер месяца => ");
    scanf("%d", &months);

    printf("В этом месяце, ");
    if (months == 1 || months == 3 || months == 5 || months == 7 || months == 8 || months == 10 || months == 12) {
        printf("тридцать один день.\n");
    } else if (months == 2) {
        printf("дватцать девять дней.\n");
    } else if (months == 4 || months == 6 || months == 9 || months == 11) {
        printf("тридцать дней.\n");
    } else {
        printf("Токого месяца нет!\n");
    }

    return 0;
}
