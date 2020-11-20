//: lesson4/c_c++/homework/homework4_24.c
// Напишите программу, которая вводит с клавиатуры до тех пор пока, не будет
// выведено число ноль. В конце программы на экран выводится минимальное и
// максимальное из введенных чисел (не считая ноль).
# include <stdio.h>

int main() {
    int numb_max = 1;
    int numb_min = 10000;
    int value_x;
    printf("Введите число value_x1 => ");
    scanf("%d", &value_x);

    while (value_x != 0) {
        if (value_x > numb_max) {
            numb_min = numb_max;
            numb_max = value_x;
        } else if (value_x < numb_min) {
            numb_min = value_x;
        }
        printf("Введите число value_x2 => ");
        scanf("%d", &value_x);
    }
    printf("numb_min => %d\n", numb_min);
    printf("numb_max => %d\n", numb_max);
    return 0;
}
