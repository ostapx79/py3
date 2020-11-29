//: lesson4/c_c++/homework/homework4_33.c
// *Ввести натуральное число N и вывести значение число 1/N, выделив период
// дроби. Например: 1/2=0.5 или 1/7=0.(142857).
#include <stdio.h>

int main() {
    int first_value = 1, second_value;
    float division_result;

    scanf("%d", &second_value);
    division_result = first_value / (float)second_value;

    if (second_value > 2 && second_value < 10) {
        printf("%d/%d=%f\n", first_value, second_value, division_result);
    } else {
        if (second_value == 10) {
            printf("%d/%d=%.1f\n", first_value, second_value, division_result);
        } else {
            printf("%d/%d=%.1f\n", first_value, second_value, division_result);
        }
    }
    return 0;

}
