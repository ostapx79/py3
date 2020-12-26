#include <iostream>

int main()
{
    /* 
     * Типы данных тежи самые как и в языке Си. Комментарий к типом данных 
     * записаны в файле lesson2_1.
     */
    int a, c, d;
    c = 3;
    d = 7;
    a = (c + 5 - 1) / 2 * d;

    std::cout << a << std::endl;
    return 0;
}
