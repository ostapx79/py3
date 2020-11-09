//: c_c++/homework/homework4_12.c
// Напишите программу, которая вводит натуральное число N и выводит на экран все
// автоморфные числа, не превосходящие N. Натуральное число называется
// автоморфные, если оно ровно свей последним цыфрам своего квадрата, 25^2=625.

#include <stdio.h>

int main() {
    int64_t numb;
    printf("Введите натуральное число => ");
    scanf("%lld", &numb);

    int64_t numb_i = 1;
    while (numb_i < numb) {
        if (numb_i * numb_i % 10 == numb_i) {
            printf("Автоморфные число степени один => %lld\n", numb_i);
        } else if (numb_i * numb_i % 100 == numb_i) {
            printf("Автоморфное число степени двух => %lld\n", numb_i);
        } else if (numb_i * numb_i % 1000 == numb_i) {
            printf("Автоморфное число степени трех => %lld\n", numb_i);
        } else if (numb_i * numb_i % 10000 == numb_i) {
            printf("Автоморфное число степени четырех => %lld\n", numb_i);
        } else if (numb_i * numb_i % 100000 == numb_i) {
            printf("Автоморфное число степени пяти => %lld\n", numb_i);
        } else if (numb_i * numb_i % 100000 == numb_i) {
            printf("Автоморфное число степени пяти => %lld\n", numb_i);
        } else if (numb_i * numb_i % 1000000 == numb_i) {
            printf("Автоморфное число степени шести => %lld\n", numb_i);
        } else if (numb_i * numb_i % 10000000 == numb_i) {
            printf("Автоморфное число степени семи => %lld\n", numb_i); 
        } else if (numb_i * numb_i % 100000000 == numb_i) {
            printf("Автоморфное число степени восемь => %lld\n", numb_i);
        } else if (numb_i * numb_i % 1000000000 == numb_i) {
            printf("Автоморфное число степени двять => %lld\n", numb_i);
        } else if (numb_i * numb_i % 10000000000 == numb_i) {
            printf("Автоморфное число степени десяти => %lld\n", numb_i);
        }
        numb_i++;
    }
    return 0;
}
