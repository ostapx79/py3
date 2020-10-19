#include <iostream>

int main()
{
    // Напишите программу, каторая вводит трехзначное число и разбивает ее на
    // цифры, при вводе числа 123 программа должна вывести 1,2,3.
 
    using namespace std;
    int first_value, second1_value, second2_value, second3_value;

    cout << "Введите трехзначное число" << endl;
    cin >> first_value;

    second1_value = first_value / 100;
    second2_value = first_value / 10 % 10;
    second3_value = first_value % 10;

    cout << second1_value << ',' << second2_value << ',' << second3_value << endl;

    return 0;
}
