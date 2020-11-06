#include <stdio.h>

int main() {
    int numb1, numb2, numb_o1, numb_o2;
    numb1 = 10000;
    numb2 = 100000;
    numb_o1 = 133; // 125
    numb_o2 = 134; // 111

    while (numb1 < numb2) {
        if (numb1 / numb_o1 == 125) {
            printf("Остаток от деление на 133 => %d\n", numb1);
        }
        if (numb1 / numb_o2 == 111) {
            printf("Остаток от деление на 134 => %d\n", numb1);
        }
        numb1++;
    }

    return 0;
}
