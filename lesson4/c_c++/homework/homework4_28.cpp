//: lesson4/c_c++/homework/homework4_28.cpp
#include <iostream>

int main() {
    int fib1 = 1, fib2 = 1;
    int n_fib;
    std::cout << "Введите натуральное число => ";
    std::cin >> n_fib;
    std::cout << "fib => " << fib1 << '\n';
    std::cout << "fib => " << fib2 << '\n';

    for (int numb_i = 0; numb_i < n_fib-2; ++numb_i) {
        int fib_sum = fib2 + fib1;
        fib1 = fib2;
        fib2 = fib_sum;
        std::cout << "fib => " << fib2 << std::endl;
    }
    return 0;
}
