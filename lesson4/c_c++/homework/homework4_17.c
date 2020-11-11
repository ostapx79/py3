//: lesson4/c_c++/homework/homework4_17.c
// Напишите программу, которая опоределяет, верно ли, что введеное число
// содержит по крайне мери две одинаковые цыфры. Возможно не стоящие рядом (как
// приме 212).
#include <stdio.h>

int main() {
    int entered_numb;
    printf("Введите трехзначное или четырехзначное натуральное число => ");
    scanf("%d", &entered_numb);

    if (entered_numb > 100 && entered_numb < 1000) {
        int result1 = entered_numb % 10;
        int result2 = entered_numb / 10 % 10;
        int result3 = entered_numb / 100;
        if (result1 == result3) {
            printf("В число есть две одинаковые цыфры.\n");
        } else if (result1 == result2) {
            printf("В число есть две одинаковые цыфры.\n");
        } else if (result2 == result3) {
            printf("В число есть две одинаковые цыфры.\n");
        } else {
            printf("В число нет две одинаковые цыфры.\n");
        }
    } else if (entered_numb > 1000 && entered_numb < 10000) {
        int result1 = entered_numb % 10;
        int result2 = entered_numb / 10 % 10;
        int result3 = entered_numb / 100 % 10;
        int result4 = entered_numb / 1000;
        if (result1 == result4) {
            printf("В число есть две одинаковые цыфры.\n");
        } else if (result1 == result2) {
            printf("В числоа есть две одинаковые цыфры.\n");
        } else if (result3 == result4) {
            printf("В числоа есть две одинаковые цыфры.\n");
        } else if ( result2 == result3) {
            printf("В числоа есть две одинаковые цыфры.\n");
        } else {
            printf("В число нет две одинаковые цыфры.\n");
        }
    } else {
        printf("Прочитайте лучше заголовок!\n");
    }
    return 0;
}
