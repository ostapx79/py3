#include <iostream>

int main() {
    int32_t numb;

    for (numb = 1; numb <= 10; numb += 2) {
        std::cout << "numb = " << numb * numb << std::endl;
    }
    return 0;
}
