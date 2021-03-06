#include <iostream>
#include <cmath>

int main()
{
    // Описание к этому файлу можно посмотреть в файле lesson2_5.c, что и как
    // работает.
    
    // В Си++ вывод на консоль то что принимает то и выводит, а Си можно
    // манипулировать дробной части.
    float a_1, a_2;
    a_1 = -1.6; // result: -1.6
    a_2 = 1.6; // result: 1.6
    std::cout << "a_1=" << a_1 << std::endl << "a_2=" << a_2 << std::endl;

    // В Си++ выводит целые числа, (int) преобразует в целое число, и не нужны
    // ни как манипуляции с дробной части как Си. Отбрасывание дробной части
    // происходит к нулю, что отрицательные так и положительные числа.
    float b_1, b_2;
    b_1 = (int)-1.6;
    b_2 = (int)1.6;
    std::cout << "b_1=" << b_1 << std::endl << "b_2=" << b_2 << std::endl;

    return 0;
}
