#include <stdio.h>

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
    return 0;
}
