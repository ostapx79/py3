#include <stdio.h>

int main() {
    int n_min;
    int n_max;
    int n_x;
    scanf("%d", &n_min);
    scanf("%d", &n_max);
    if (n_min > n_max) {
        int tmp = n_min;
        n_min = n_max;
        n_max = tmp;
    }
    scanf("%d", &n_x);
    while (n_x != 0) {
        if (n_x > n_max) {
            n_max = n_x;
        } else if (n_x < n_min) {
            n_min = n_x;
        }
        scanf("%d", &n_x);
    }
    printf("n_min => %d\n", n_min);
    printf("n_max => %d\n", n_max);
}
