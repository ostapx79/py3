//: lesson4/c_c++/homework/homewor4_27.c
#include <stdio.h>

int main() {
    int numb;
    printf("Введите число => ");
    scanf("%d", &numb);
    for (int i = 1; i <= numb; ++i) {
        printf("Все цифры числа => %d\n", i);
    }
    return 0;
}
