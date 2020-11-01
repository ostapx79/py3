#include <iostream>

int main() {

    int32_t numb;

    for (numb = 2; numb < 500; numb++) {
        int32_t count, k_numb;
        count = 0;
        for ( k_numb = 2; k_numb < numb; k_numb++) {
            if ( numb % k_numb == 0) {
                count++;
            }
        }
        if ( count == 0) {
            std::cout << "numb = " << numb << std::endl;
        }
    }
    return 0;
}
