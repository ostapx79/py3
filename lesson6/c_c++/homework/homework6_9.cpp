// py3/lesson6/c_c++/homework/homework6_9.cpp
#include <iostream>

int sum_digits(int numb_i) {
    int res = 0;
    int i = 0;
    while (numb_i > i) {
        res += numb_i % 10;
        numb_i /= 10;
    }
    return res;
}

int main() {
    int numb = 100;
    int same = 0;
    int i;
    for (i = 1; i < numb; ++i) {
        if (sum_digits(i) == sum_digits(i * 9)) {
            same = i;
            std::cout << same << std::endl;
        }
    }
    return 0;
}
