#include <iostream>

int main() {
    std::cout << "Я собераюсь ссесть пирожки!\n";
    int32_t pie = 1;

    while (pie <= 10) {
        std::cout << "Пирожок = " << pie << '\n';
        pie++;
    }
    std::cout << "Ой.. Чють не лопнул!\n";

    return 0;
}
