/* lesson6/c_c++/lesson6_4a.cpp */
#include <iostream>

bool isPrime(int numb_n) {
    int numb_k = 2;
    while (numb_k * numb_k <= numb_n && numb_n % numb_k != 0) {
        numb_k++;
    }
    return numb_k * numb_k > numb_n;
}

int main() {
    int numb;
    std::cout << "Введите число -> ";
    std::cin >> numb;
 
    while (isPrime(numb)) {
        std::cout << "число простое\n";
        std::cout << "Введите число -> ";
        std::cin >> numb;
    }
    return 0;
}
