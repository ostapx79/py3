//: c_c++/homework4_10.c
// Напишите программу, которая вводит натуральное число N и выводит на экран все
// натуральные числа, не превосходящие числа N делящиеся на каждую из своих цифр.

#include <stdio.h>

int main() {
    int numb;
    printf("Вводите натуральное число => ");
    scanf("%d", &numb);

    int numb_i = 1;

    while (numb_i < numb) {
        int result = numb / numb_i;
        int result_o = numb % numb_i;
        if ((result <= numb && result_o == 0) || result == 1) {
            if (result == 1) {
                printf("result_numb => %d\n", result);
                break;
            }
            printf("result_numb => %d\n", result); // 1 2 3 6 9 18
        }
        numb_i++;
    }
    return 0;
}
