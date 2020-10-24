#include <iostream>

int main() {
    using namespace std;
    int value_a, value_b, value_c;
    value_a = 8;
    value_b = 3;
    value_c = 11;

    if (value_a > value_b) cout << "value_a => " << value_a << endl;
    else cout << "value_b => " << value_b << endl;
    if (value_c > value_b) cout << "value_c => " << value_c << endl;
    else cout << "value_b => " << value_b << endl;

    if (value_a > value_b && value_b > value_c) {
        cout << "value_a => " << value_a << endl;
    } else if (value_c < value_b) {
        cout << "value_b => " << value_b << endl;
    } else {
        cout << "value_c => " << value_c << endl;
    }

    return 0;
}
