#include <stdio.h>

int main() {

    int value_i = 1;
    while (value_i <= 10) {
        printf("value_i => %d\n", value_i);
        // если мы i не увеличеваем на единичку
        // будет бесконечный цыкл
        value_i += 1;
    }

    return 0;
}
