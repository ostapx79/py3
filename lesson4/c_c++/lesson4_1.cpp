#include <iostream>

int main() {
    int numb, count;
    numb = 1234;
    count = 0;

    while (numb > 0) {
        std::cout << "numb => " << numb << " count => " << count << std::endl;
        numb = numb / 10;
        count++;
    }

    return 0;
}
