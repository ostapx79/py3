#include <stdio.h>

int main() {
    // Напишите программу, которая вводит натуральные числа a и b, и выводит
    // сумму квадратов натуральных чисел в инетрвале от a и b.
    int numb_a, numb_b;

    printf("Введите натуральное число!\n");
    printf("Введите первое число => ");
    scanf("%d", &numb_a);
    printf("Введите второе число => ");
    scanf("%d", &numb_b);

    if (numb_a < numb_b) {
        int result_sum = 0;
        while (numb_a <= numb_b) {
            result_sum += numb_a * numb_a;
            numb_a += 1;
        }
        printf("Сумма квадратов чисел => %d\n", result_sum);
    } else {
        int result_sum = 0;
        while (numb_a >= numb_b) {
            result_sum += numb_a * numb_a;
            numb_a--;
        }
        printf("Сумма квадратов чисел => %d\n", result_sum);
    }
    return 0;
}
