//: lesson5/c_c++/homework/homework5_test.c
#include <stdio.h>
#include <string.h>

void hyphen(int numb_i) {
//    int numb_i = 10;
    for (int i = 1; i < numb_i; i++) {
        printf("-");
    }
}

void romanSymbol(int numb_v) {
    if (numb_v == 5) {
        printf("V");
    } else if (numb_v > 5 && numb_v < 9) {
    
        numb_v -= 5;
        printf("V");
        for (int i = 1; i <= numb_v; i++) {
            printf("I");
        }

    }
}

int main() {
    int numb_n;
    printf("Введите число -> ");
    scanf("%d", &numb_n);
    romanSymbol(numb_n);
    printf("\n");
    return 0;
}
