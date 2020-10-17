#include <iostream>

int main()
{
    // Вычисляем значнение целечисленной переменной first_numb=26 и
    // second_numb=6.
    using namespace std;

    int first_numb, second_numb, trihd_numb;

    first_numb = 26;
    second_numb = 6;

    second_numb = first_numb % second_numb + 4;
    trihd_numb = first_numb % second_numb + 1;
    cout << "trihd_numb => " << trihd_numb << endl; // result: 3

    trihd_numb = first_numb % second_numb + second_numb;
    cout << "trihd_numb => " << trihd_numb << endl; // result: 8

    trihd_numb = first_numb / second_numb + first_numb;
    cout << "trihd_numb => " << trihd_numb << endl; // result: 30

    second_numb = first_numb / second_numb;
    trihd_numb = first_numb / second_numb;
    cout << "trihd_numb => " << trihd_numb << endl; // result: 6

    second_numb = first_numb / second_numb + second_numb;
    trihd_numb = first_numb % second_numb + first_numb;
    cout << "trihd_numb => " << trihd_numb << endl; // result: 32

    second_numb = first_numb / second_numb;
    trihd_numb = first_numb % (second_numb + 1);
    cout << "trihd_numb => " << trihd_numb << endl; // result: 2

    second_numb = first_numb % second_numb;
    trihd_numb = first_numb / (second_numb + 1);
    cout << "trihd_numb => "<< trihd_numb << endl; // result: 26

    return 0;
}
