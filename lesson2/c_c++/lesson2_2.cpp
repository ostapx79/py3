#include <iostream>

int main()
{
    // Кометарий по арифметических операций можно найти в файле по Си
    // lesson2_2.c. 
    int a, b;
    a = 3;
    b = 4;
    float x;

    x = 3 / 4;
    std::cout << "x=3/4 => " << x << std::endl; // result: 0
    x = 3. / 4;
    std::cout << "x=3./4 => " << x << std::endl; // result: 0.75
    x = 3 / 4.;
    std::cout << "x=3/4. => " << x << std::endl; // result: 0.75
    x = a / 4;
    std::cout << "x=a/4 => " << x << std::endl; // result: 0
    x = a / 4.;
    std::cout << "x=a/4. => " << x << std::endl; // result: 0.75
    x = 3 / b;
    std::cout << "x=3/b => " << x << std::endl; // result: 0
    x = 3. / b;
    std::cout << "x=3./b => " << x << std::endl; // result: 0.75
    x = a / b;
    std::cout << "x=a/b => " << x << std::endl; // result: 0
    x = (float)a / b;
    std::cout << "x=(float)a/b => " << x << std::endl; // result: 0.75
    x = a / (float)b;
    std::cout << "x=a/(float)b => " << x << std::endl; // result: 0.75

    // В С++ когда делишь целое число на целое число, и клодешь в переменой с
    // типом float. На выход получаем целое число.
    
    int d = 6, c = 2;
    float f;

    f = d / c;
    std::cout << f << std::endl; // result: 3

    // Засомневался, но всетаки float = int / int; // result: int, интересно
    // надо взять на заметку.

    return 0;
}
