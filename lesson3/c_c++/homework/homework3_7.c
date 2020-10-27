#include <stdio.h>

int main() {
    // Напишите программу, которая вводит с клавиатуры номер месяца и день, и
    // опредиляет сколько дней осталось до нового года. Если написать не верный
    // номер месяца и число, выводим исключение.
    
    int months, day, result_day; 
    int year = 366;

    printf("Введите номер месеца и дату, что-бы узнать сколько осталось до Н.Г.\n");
    printf("Введите номер месяца => ");
    scanf("%d", &months);
    printf("Введите дату => ");
    scanf("%d", &day);


    if (months == 1) {
        if (day >= 1 && day < 32) {
            result_day = day - year; // 366 - 31 = 355 result_day = year - day
            printf("До нового года осталось, ");
            printf("%d дней.\n", result_day);
        } else {
            printf("Нет токого дня в этом месеце!\n");
        }
    } else if (months == 2) {
        int months_1 = 31;
        if (day >= 1 && day < 30) {
            result_day = year - (months_1 + day);
            printf("До нового года осталось, ");
            printf("%d дней.\n", result_day);
        } else {
            printf("Нет токого дня в этом месяце!\n");
        }
    } else if (months == 3) {
        int months_2 = 60;
        if (day >= 1 && day < 32) {
            result_day = year - (months_2 + day);
            printf("До нового года осталось, ");
            printf("%d дней.\n", result_day);
        } else {
            printf("Нет токого дня в этом месяце!\n");
        }
    } else if (months == 4) {
        int months_3 = 91;
        if (day >= 1 && day < 31) {
            result_day = year - (months_3 + day);
            printf("До нового года осталось, ");
            printf("%d дней.\n", result_day);
        } else {
            printf("Нет токого дня в этом месяце!\n");
        }
    } else if (months == 5) {
        int months_4 = 121;
        if (day >= 1 && day < 32) {
            result_day = year - (months_4 + day);
            printf("До нового года осталось, ");
            printf("%d дней.\n", result_day);
        } else {
            printf("Нет токого дня в этом месяце!\n");
        }
    } else if (months == 6) {
        int months_5 = 152;
        if (day >=1 && day < 31) {
            result_day = year - (months_5 + day);
            printf("До нового года осталось, ");
            printf("%d дней.\n", result_day);
        } else {
            printf("Нет токого дня в этом месяце!\n");
        }
    } else if (months == 7) {
        int months_6 = 182;
        if (day >= 1 && day < 32) {
            result_day = year - (months_6 + day);
            printf("До нового года осталось, ");
            printf("%d дней.\n", result_day);
        } else {
            printf("Нет токого дня в этом месяце!\n");
        }
    } else if (months == 8) {
        int months_7 = 213;
        if (day >= 1 && day < 32) {
            result_day = year - (months_7 + day);
            printf("До нового года осталось, ");
            printf("%d дней.\n", result_day);
        } else {
            printf("Нет токого дня в этом месяце!\n");
        }
    } else if (months == 9) {
        int months_8 = 244;
        if (day >= 1 && day < 31) {
            result_day = year - (months_8 + day);
            printf("До нового года осталось, ");
            printf("%d дней.\n", result_day);
        } else {
            printf("Нет токого дня в этом месяце!\n");
        }
    } else if (months == 10) {
        int months_9 = 274;
        if (day >= 1 && day < 32) {
            result_day = year - (months_9 + day);
            printf("До нового года осталось, ");
            printf("%d дней.\n", result_day);
        } else {
            printf("Нет токого дня в этом месяце!\n");
        }
    } else if (months == 11) {
        int months_10 = 305;
        if (day >= 1 && day < 31) {
            result_day = year - (months_10 + day);
            printf("До нового года осталось, ");
            printf("%d дней.\n", result_day);
        } else {
            printf("Нет токого дня в этом месяце!\n");
        }
    } else if (months == 12) {
        int months_11 = 335;
        if (day >=1 && day < 32) {
            result_day = year - (months_11 + day);
            printf("До нового года осталось, ");
            printf("%d дней.\n", result_day);
        } else {
            printf("Нет токого дня в этом месяце!\n");
        }
    } else {
        printf("Нет месяц с таким номером!\n");
    }

// year = 366;
// months = 5;
// day = 31;
// result_day = months_5 - 366;
    return 0;
}
