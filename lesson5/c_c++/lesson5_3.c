//: lesson5/c_c++/lesson5_3.c
// Процедуры с параметры.
#include <stdio.h>

void printSred(int numb_a, int numb_b) {
    printf("%f", (numb_a + numb_b) / 2.);
}

int main() {
    int numb_x, numb_y;
    printf("Введите натуральное число => ");
    scanf("%d", &numb_x);
    printf("Введите натуральное число => ");
    scanf("%d", &numb_y);
    printSred(numb_x, numb_y);
    printf("\n");
    return 0;
}
