#include <iostream>

int main() {
    using namespace std;
    int numb, result = 0;

    cout << "Введите натуральное число => ";
    cin >> numb;

    int numb_u = 1;
    while (numb_u <= numb) {
        result += numb_u;
        numb_u++;
    }
    cout << "Сумма натуральных чисел => " << result << '\n';
    return 0;
}
