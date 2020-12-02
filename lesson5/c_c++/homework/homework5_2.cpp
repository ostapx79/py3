//: lesson5/c_c++/homework/homework5_2.cpp
#include <iostream>

void divisors(int numb_n) {
    int numb_r = numb_n;
    for (; numb_n > 0; numb_n--) {
        if (numb_r % numb_n == 0) {
            std::cout << "divisors -> " << numb_n << ' ';
        }
    }
}

int main() {
    int numb_i;
    std::cout << "Введите число -> ";
    std::cin >> numb_i;
    divisors(numb_i);
    std::cout << '\n';
    return 0;
}
