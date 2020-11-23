//: lesson4/c_c++/homework/homework4_29.c
#include <stdio.h>

int main() {
    int numb_a, numb_n;
    printf("Для получения простых чисел,\n");
    printf("Введите первое число => ");
    scanf("%d", &numb_n);
    printf("Введите второе число => ");
    scanf("%d", &numb_a);
    
    while (numb_n < numb_a) {
        int numb_k = 2;
        while (numb_n % numb_k != 0) {
            numb_k++;
        }
        if (numb_k == numb_n) {
            printf("Простое число => %d\n", numb_n);
        }
        numb_n++;
    }
    return 0;
}
