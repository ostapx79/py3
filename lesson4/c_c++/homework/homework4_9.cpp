#include <iostream>

int main() {
    using namespace std;
    int numb1 = 10000;
    int numb2 = 100000;
    int numb_o1 = 133;
    int numb_o2 = 134;

    while (numb1 < numb2) {
        if (numb1 / numb_o1 == 125) {
            cout << "Остаток от деление на 133 => " << numb1 << '\n';
        }
        if (numb1 / numb_o2 == 111) {
            cout << "Остаток от деление на 134 => " << numb1 << '\n';
        }
        numb1++;
    }
    return 0;
}
