#include <stdio.h>

int main() {
    int numb, numb_u = 0;
    printf("Введите натуральное число => ");
    scanf("%d", &numb);

    for (int numb_u1 = 1; numb_u1 <= numb; numb_u1++) {
        numb_u += numb_u1;
//        printf("numb_u %d\n", numb_u1);
    }
    printf("Сумма натуральных чисел => %d\n", numb_u);
    return 0;
}
