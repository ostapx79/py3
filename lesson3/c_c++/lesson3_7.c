#include <stdio.h>

int main(){

    int months;

    printf("Введите номер месеца => ");
    scanf("%d", &months);

    if (months == 1){
        printf("January\n");
    } else if (months == 2){
        printf("February\n");
    } else if (months == 3){
        printf("March\n");
    } else if (months == 4){
        printf("April\n");
    } else if (months == 5){
        printf("May\n");
    } else if (months == 6){
        printf("June\n");
    } else if (months == 7){
        printf("Jule\n");
    } else if (months == 8){
        printf("August\n");
    } else if (months == 9){
        printf("September\n");
    } else if (months == 10){
        printf("October\n");
    } else if (months == 11){
        printf("November\n");
    } else if (months == 12){
        printf("December\n");
    } else {
        printf("Not this months!\n");
    }

    return 0;
}
