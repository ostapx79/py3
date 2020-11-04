#include <iostream>

int main() {
    using namespace std;
    int numb, numb_u = 0;
    cout << "Введите натуральное число => ";
    cin >> numb;

    for (int numb_i = 1; numb_i <= numb; numb_i++) {
        numb_u += numb_i;
    }
    cout << "Сумма натурального числа => " << numb_u << endl;
    return 0;
}
