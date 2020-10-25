#include <stdio.h>

int main() {
    // Напишите программу, каторая определяет, верно ли, что введенное
    // число-трехзнчное.
    
    int three_digit;
    printf("Введите целое число\n");
    printf("number => ");
    scanf("%d", &three_digit);

    printf("Введенное число является\n");
    if (three_digit >= 0 && three_digit <= 9) {
        printf("одно-значным => %d\n", three_digit);
    } else if (three_digit > 9 && three_digit <= 99) {
        printf("двух-значным => %d\n", three_digit);
    } else if (three_digit > 99 && three_digit <= 999) {
        printf("трех-значным => %d\n", three_digit);
    } else {
        printf("четырех-значным => %d\n", three_digit);
    }
    
    return 0;
}
