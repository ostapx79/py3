#include <iostream>

int main() {
    std::cout << "Я собираюсь ссесть пирожки!" << std::endl;

    for (int32_t pie = 1; pie <= 10; pie += 1) {
        std::cout << "Пирожок = " << pie << std::endl;
    }
    std::cout << "Ой.. Чють не лопнул!" << std::endl;

    return 0;
}
