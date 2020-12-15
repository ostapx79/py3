/*
 * lesson5/c_c++/homework/homework5_11.cpp
 */
#include <iostream>

void fibonacciNumbers(int numb_fib) {
    int first_fib_numb = 0;
    int second_fib_numb = 1;
    int numb_i = 0;
    while (numb_i <= numb_fib) {
        std::cout << "first Fibonacci number -> " << first_fib_numb << '\n';
        std::cout << "second Fibonacci number -> " << second_fib_numb << '\n';
        int res_fib_val = first_fib_numb + second_fib_numb;
        std::cout << "The result of two Fibonacci values -> " << res_fib_val << "\n\n";
        first_fib_numb = second_fib_numb;
        second_fib_numb = res_fib_val;
        ++numb_i;
    }
}

int main() {
    int numb_n;
    std::cout << "Введите число -> ";
    std::cin >> numb_n;
    std::cout << '\n';
    fibonacciNumbers(numb_n);
    return 0;
}
