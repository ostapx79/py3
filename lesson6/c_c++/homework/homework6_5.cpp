/*
 * lesson6/c_c++/homework/homwork6_5.cpp
 */
#include <iostream>

int expand_digits_number(int numb_n) {
    int res;
    while (numb_n > 0) {
        res = numb_n % 10;
        std::cout << res;
        numb_n /= 10;
    }
    return res;
}

int main(int argc, char* argv[]) {
    int numb;
    std::cin >> numb;
    int result = expand_digits_number(numb);
    std::cout << '\n';
    return 0;
}
