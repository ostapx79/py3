//: lesson4/c_c++/homework/homework4_13.c
#include <stdio.h>

int main() {
    int numb;
    printf("Введите натуральное число => ");
    scanf("%d", &numb);

    for (int numb_i = 1; numb_i <= numb; numb_i++) {
        if (numb_i % 2 == 0) {
            printf("Четное натуральное число => %d\n", numb_i);
        } else {
            printf("Нечетное натуральное число => %d\n", numb_i);
        }
    }
    char s = '\n';
    printf("%c", s);

    int numb_j = 1;
    while (numb_j <= numb) {
        if (numb_j % 2 == 0) {
            printf("Четное натуральное число => %d\n", numb_j);
        } else {
            printf("Нечетное натуральное число => %d\n", numb_j);
        }
        numb_j++;
    }
    return 0;
}
