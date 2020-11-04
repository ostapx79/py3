#include <stdio.h>

int main() {
    int numb_1, numb_2;
    printf("Введтие натуральное число!\n");
    printf("Введите первое число => ");
    scanf("%d", &numb_1);
    printf("Введите второе число => ");
    scanf("%d", &numb_2);

    if (numb_1 <= numb_2) {
        while (numb_1 <= numb_2) {
            int result = numb_1 * numb_1;
            printf("result => %d * %d = %d\n", numb_1, numb_1, result);
            numb_1 += 1;
        }
    } else {
        while (numb_1 >= numb_2) {
            int result = numb_1 * numb_1;
            printf("result => %d * %d = %d\n", numb_1, numb_1, result);
            numb_1 -= 1;
        }
    }
    return 0;
}
