//: lesson5/c_c++/lesson5_test.cpp
#include <iostream>

void Swap(int &numb_a, int &numb_b) {
    int numb_c;
    numb_c = numb_a;
    numb_a = numb_b;
    numb_b = numb_c;
}

int main() {
    int numb_x = 2;
    int numb_y = 3;
    Swap(numb_x, numb_y);
    std::cout << "numb_x -> " << numb_x
        << "\nnumb_y -> " << numb_y << '\n';
    return 0;
}
