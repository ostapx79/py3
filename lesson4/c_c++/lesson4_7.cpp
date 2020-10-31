#include <iostream>

int main() {
    int64_t numb, numb_power;

    numb_power = 2;

    for (numb = 1; numb <= 10; numb += 1) {
        std::cout << "numb_power = " << '\n';
        numb_power *= 2;
    }
    return 0;
}
