#include <iostream>

int main() {
    int numb = 10;

    while ( numb > 0) {
        std::cout << numb << std::endl;
        numb -= 1;
    }
    std::cout << numb << std::endl;
    
    return 0;
}
