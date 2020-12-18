/*
 * lesson6/c_c++/lesson6_4.c
 */
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int numb_n) {
    int numb_k = 2;
    while (numb_k * numb_k <= numb_n && numb_n % numb_k != 0) {
        ++numb_k;
    }
    return numb_k * numb_k > numb_n;
}

int main() {
    int numb;
    printf("Введите число -> ");
    scanf("%d", &numb);

    int numb_prime = isPrime(numb);
    if (numb_prime == 1) {
        printf("простое -> %d\n", numb_prime);
    } else {
        printf("не простое -> %d\n", numb_prime);
    }
    return 0;
}
