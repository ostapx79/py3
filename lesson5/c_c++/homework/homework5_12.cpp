/*
 * lesson5/c_c++/homework/homework5_12.cpp
 */
#include <iostream>

void primeNumber(int& numb_n) {
    int numb_k = 2;
    while (numb_n % numb_k != 0) {
        ++numb_k;
    }
    if (numb_k == numb_n) {
        std::cout << "prime\n";
    } else {
        std::cout << "no prime\n";
    }
}

int main() {
    int numb;
    std::cout << "Введите число -> ";
    std::cin >> numb;
    primeNumber(numb);
    return 0;
}
