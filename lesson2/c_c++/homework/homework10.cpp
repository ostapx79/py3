#include <iostream>

int main()
{
    using namespace std;
    int first_numb, second_numb, trihd_numb;
    first_numb = -22;
    second_numb = 4;

    trihd_numb = first_numb % second_numb + second_numb;
    cout << "trihd_numb => " << trihd_numb << endl;

    trihd_numb = first_numb / second_numb + first_numb;
    cout << "trihd_numb => " << trihd_numb << endl;

    second_numb = first_numb / second_numb;
    trihd_numb = first_numb / second_numb;
    cout << "trihd_numb => " << trihd_numb << endl;

    second_numb = first_numb / second_numb + second_numb;
    trihd_numb = first_numb % second_numb + first_numb;
    cout << "trihd_numb => " << trihd_numb << endl;

    second_numb = first_numb % second_numb + 4;
    trihd_numb = first_numb % second_numb + 1;
    cout << "trihd_numb => " << trihd_numb << endl;

    second_numb = first_numb / second_numb;
    trihd_numb = first_numb % (second_numb + 1);
    cout << "trihd_numb => " << trihd_numb << endl;

    second_numb = first_numb % second_numb;
    trihd_numb = first_numb / (second_numb + 1);
    cout << "trihd_numb => " << trihd_numb << endl;

    return 0;
}
