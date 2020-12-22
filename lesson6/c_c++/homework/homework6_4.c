/*
 * lesson6/c_c++/homework/homework6_4.c
 * Напишите функцию, который вычисляет наибольший общий делитель делитель.
 */
#include <stdio.h>

int greatestCommonFactor(int numb_x, int numb_y) {
    int numb_res = numb_x + numb_y;
    int res = 0;
    int count = 1;
    while (count <= numb_res) {
        if (numb_res % count == 0) {
           if (res < count) {
               res = count;
           }
        }
        count++;
    }
    return res;
}

int main(int argc, char** argv) {
    int numb1, numb2;
    printf("Введите первое число -> ");
    scanf("%d", &numb1);
    printf("Введите второе число -> ");
    scanf("%d", &numb2);
    int numb_result = greatestCommonFactor(numb1, numb2);
    printf("Наибольший общий делитель -> %d\n", numb_result);
    return 0;
}
