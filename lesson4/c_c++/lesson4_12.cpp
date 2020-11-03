#include <iostream>

int main() {
    using namespace std;

    for (int i = 1; i <= 4; i += 1) {
        for (int k = 1; k <= i; k += 1) {
            cout << "k = " << k << '\n';
        }
        cout << "i = " << i << '\n';
    }
    return 0;
}
