#include <iostream>

int main() {
    using namespace std;
    int numb_a, numb_b;
    cout << "Введите натуральные числа!\n";
    cout << "Введите первое число => ";
    cin >> numb_a;
    cout << "Введите второе число => ";
    cin >> numb_b;

    if (numb_a < numb_b) {
        int result_sum = 0;
        while (numb_a <= numb_b) {
            result_sum += numb_a * numb_a;
            numb_a++;
        }
        cout << "Сумма квадратных чисел => " << result_sum << endl;
    } else {
        int result_sum = 0;
        while (numb_a >= numb_b) {
            result_sum += numb_a * numb_a;
            numb_a--;
        }
        cout << "Сумма квадратных чисел => " << result_sum << endl;
    }
    return 0;
}
