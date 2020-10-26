#include <stdio.h>

int main() {
    // Решить предедущю задачу, с помощью оператора выбора.
    
    int months;

    printf("Введите число месяца => ");
    scanf("%d", &months);

    printf("Название времени года, ");
    switch (months) {
        case 1: printf("зима.\n");
                break;
        case 2: printf("зима.\n");
                break;
        case 3: printf("весна.\n");
                break;
        case 4: printf("весна.\n");
                break;
        case 5: printf("весна.\n");
                break;
        case 6: printf("лето.\n");
                break;
        case 7: printf("лето.\n");
                break;
        case 8: printf("лето.\n");
                break;
        case 9: printf("осень.\n");
                break;
        case 10: printf("осень.\n");
                 break;
        case 11: printf("осень.\n");
                 break;
        case 12: printf("зима.\n");
                 break;
        default: printf("Токого числа месяца нет!\n");
    }

    return 0;
}
