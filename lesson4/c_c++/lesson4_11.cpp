#include <iostream>

int main() {
    int32_t numb;

    for (numb = 2; numb < 100; numb++) {

        int32_t k_numb = 2;
        while (k_numb * k_numb <= numb and numb % k_numb != 0) {
            k_numb += 1;
        }
        if (k_numb * k_numb > numb) {
            std::cout << "numb = " << numb << std::endl;
        }
    }

    return 0;
}
