//: lesson5/c_c++/homework/homework5_5.c
#include <stdio.h>

void octalNumberSystem(int numb_oct) {
    printf("%010o", numb_oct);
//    while (numb_i) {
//        printf("%d", numb_i % 8);
//        numb_i /= 8;
//    }
}

int main() {
    int numb_n;
    printf("Введите число -> ");
    scanf("%d", &numb_n);
    octalNumberSystem(numb_n);
    printf("\n");
    return 0;
}
