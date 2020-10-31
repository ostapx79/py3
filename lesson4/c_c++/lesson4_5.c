#include <stdio.h>

int main() {
    printf("Я собераюсь ссесть пирожки!\n");
    int32_t pie;

    for (pie = 1; pie <= 10; pie += 1) {
        printf("Пирожок = %d\n", pie);
    }
    printf("Ой.. Чють не лопнул!\n");

    return 0;
}
