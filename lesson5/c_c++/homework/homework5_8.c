/* 
 * lesson5/c_c++/homework/homework5_8.c
 * Напишите процедуру, которая принимает параметр натуральное число - N и
 * выводит на экран квадрат из звездочек со стороной - N. 
 */
#include <stdio.h>

void squareOfStars(int numb_i) {
    int numb_stars = 0;
    while (numb_stars < numb_i) {
        int i;
        for (i = 0; i < numb_i; i++) {
            printf("* ");
        }
        printf("\n");
        numb_stars++;
    }
}

int main() {
    int in_stars;
    printf("Введите число -> ");
    scanf("%d", &in_stars);
    squareOfStars(in_stars);
    return 0;
}
