#include <iostream>

int main() {
    int32_t numb;
    numb = 10;
    while (numb > 0) {
        std::cout << "numb = " << numb * numb << std::endl;
        numb -= 1;
    }
    return 0;
}
