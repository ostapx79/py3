#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    using namespace std;
    srand(time(NULL));
    int numb_rand, result = 0;
    cout << "Введите натуральное число => ";
    cin >> numb_rand;
    for (int numb_i = 1; numb_i <= numb_rand; numb_i++) {
        result = numb_i + rand()%(numb_rand - numb_i + 1);
        cout << "Псевдослучаное число => " << result << endl;
    }
    return 0;
}
