#include <stdio.h>

int main()
{
    int a = -22, b = 4, c;
    
    // b = a / b + b;
    c = a % b + b;

    printf("%d\n", c);

    return 0;
}
