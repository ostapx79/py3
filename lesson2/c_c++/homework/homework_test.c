#include <stdio.h>

int main()
{
    int a = 26, b = 6, c;
    
    // b = a / b + b;
    c = a % b + b;

    printf("%d\n", c);

    return 0;
}
