//: c_c++/homework4/homework4_10.cpp
#include <iostream>

int main() {
    using namespace std;

    int numb;
    cout << "Введите натуральное число => ";
    cin >> numb;

    int numb_i;
    while (numb_i < numb) {
        int result = numb / numb_i;
        int remainder_result = numb % numb_i;
        if ((result <= numb && remainder_result == 0) || result == 1) {
            if (result == 1) {
                cout << "number_result => " << result << endl;
                break;
            }
            cout << "number_result => " << result << endl;
        }
        numb_i++;
    }
    return 0;
}
