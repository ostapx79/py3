#include <iostream>

int main() {
    int64_t numb, numb_power;

    numb = 1;
    numb_power = 2;

    while (numb <= 10) {
        std::cout << "numb_power = " << numb_power << std::endl;
        numb_power *= 2;
        numb++;
    }
    return 0;
}
