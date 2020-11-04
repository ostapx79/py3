#include <stdio.h>

int main() {
    int numb, numb_u = 0;
    printf("Введите натуральное число => ");
    scanf("%d", &numb);

    for (int numb_i = 1; numb_i <= numb; numb_i++) {
        numb_u += numb_i;
    }
    printf("Сумма натурального чиса => %d\n", numb_u);
    return 0;
}
