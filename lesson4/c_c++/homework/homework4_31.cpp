//: lesson4/c_c++/homework/homework4_31.cpp
#include <iostream>

int main() {
    int numb_n = 100000;
    int numb_i;
    for (numb_i = 2; numb_i < numb_n; numb_i++) {
        int numb_s = 0;
        for (int numb_j = 1; numb_j < numb_i; numb_j++) {
            if (numb_i % numb_j == 0) {
                numb_s += numb_j;
            }
        }
        if (numb_s == numb_i) {
            std::cout << "perfect => " << numb_i << '\n';
        }
    }
    return 0;
}
