#include <iostream>

int main() {
    int numb_hex;
    std::cin >> numb_hex;
    std::cout << "00" << std::hex << std::uppercase << numb_hex;
    std::cout << std::endl;
}
