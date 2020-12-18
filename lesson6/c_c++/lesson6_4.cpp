/* lesson6/c_c++/lesson6_4.cpp */
#include <iostream>
#include <cstdbool>

bool isPrime(int numb_n) {
    int numb_k = 2;
    while (numb_k * numb_k <= numb_n && numb_n % numb_k != 0) {
        ++numb_k;
    }
    return numb_k * numb_k > numb_n;
}

int main() {
    int numb;
    std::cout << "Введите число -> ";
    std::cin >> numb;

    int numb_prime = isPrime(numb);
    if (numb_prime == 1) {
        std::cout << "простое число\n";
    } else {
        std::cout << "не простое число\n";
    }
    return 0;
}
