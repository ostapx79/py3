//: lesson5/c_c++/homework/homework5_hex.c
#include <stdio.h>

int main() {
    int numb_hex;
    int numb_oct;
    scanf("%d", &numb_hex);
    scanf("%d", &numb_oct);
    printf("%04x\n", numb_hex);
    printf("%04o\n", numb_oct);
    return 0;
}
