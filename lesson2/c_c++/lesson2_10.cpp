#include <iostream>
#include <cstdlib>

int main()
{
    // генерируем пять случайных чисел, больше чем 80 и меньше чем 100;
    using namespace std;

    cout << 80 + rand()%(100 - 80) << endl;
    cout << 80 + rand()%(100 - 80) << endl;
    cout << 80 + rand()%(100 - 80) << endl;
    cout << 80 + rand()%(100 - 80) << endl;
    cout << 80 + rand()%(100 - 80) << endl;

    return 0;
}
