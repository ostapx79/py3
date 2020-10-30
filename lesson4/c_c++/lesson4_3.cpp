#include <iostream>

int main() {
    using namespace std;
    int32_t numb;
    numb = 0;
    int numb_n;
    cin >> numb_n;

    int numb_i = 0;
    while (numb_i < numb_n) {
        int32_t numb_x;
        cin >> numb_x;
        numb += numb_x;
        numb_i += 1;
    }
    cout << "sum of numbers is " << numb << '\n';
    return 0;
}
