// lesson7/c_c++/lesson7_1.cpp
#include <iostream>

void hanoi(int numb_n, int numb_k, int numb_m) {
    int numb_p;
    if (numb_n == 0) return;

    numb_p = 6 - numb_k - numb_m;
    hanoi(numb_n - 1, numb_k, numb_p);
    std::cout << numb_k << " -> " << numb_m << std::endl;
    hanoi(numb_n - 1, numb_p, numb_m);
}

int main() {
    hanoi(4, 1, 3);
    return 0;
}
