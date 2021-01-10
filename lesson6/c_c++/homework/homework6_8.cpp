/*
 * py3/lesson6/c_c++/homework/homework6_8.cpp
 */
#include <iostream>

int numb_fib(int numb_i) {
    int fib_1 = 0;
    int fib_2 = 1;

    if (numb_i == 0) return 0;
    if (numb_i == 1 or numb_i == 2) return 1;

    int i;
    for (i = 1; i <= numb_i; i++) {
        fib_1 = fib_2 + fib_1;
        fib_2 = fib_1 - fib_2;
    }
    return fib_1;
}

int main() {
    int numb;
    std::cout << "Введите число - ";
    std::cin >> numb;

    int result_fib;
    result_fib = numb_fib(numb);
    std::cout << result_fib << std::endl;

    return 0;
}
