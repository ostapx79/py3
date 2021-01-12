#include <stdio.h>

int sum_digits(int numb_k);

int main() {
    int numb;
    scanf("%d", &numb);

    int numb_res = numb;
    int numb_i = 1;
    while (numb_i != 3) {
        scanf("%d", &numb);
        numb_res += numb;
        numb_i++;
    }
    printf("%d\n", numb_res);
    

    int numb_j = 100;
    int res = sum_digits(numb_j);
    printf("%d\n", res);

    return 0;
}


int sum_digits(int numb_k) {
    int res = 0;
    int i = 0;
    while (i < numb_k) {
        res += numb_k % 10;
        numb_k /= 10;
    }
    return res;
}
