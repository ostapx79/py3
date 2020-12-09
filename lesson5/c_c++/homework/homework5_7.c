//: lesson5/c_c++/homework/homework5_7.c
// Напишите процедуру, которая принимает параметр натуральное число - N и
// выводит не экран линию из N - "-".
#include <stdio.h>

void takesParameter(int numb_n) {
    int numb_i = 0;
    while (numb_i < numb_n) {
        printf("-");
        ++numb_i;
    }
}

int main() {
    int numb_takes;
    printf("Введите число -> ");
    scanf("%d", &numb_takes);
    takesParameter(numb_takes);
    printf("\n");
    return 0;
}
