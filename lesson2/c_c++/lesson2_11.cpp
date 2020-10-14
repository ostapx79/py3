#include <iostream>
#include <cstdlib>

int main()
{
    // генерация чисел
    using namespace std;
    srand(2);
    cout << 80 + rand()%(100 - 80 + 1) << endl;
    cout << 80 + rand()%(100 - 79) << endl;
    cout << 80 + rand()%(100 - 79) << endl;
    cout << 80 + rand()%21 << endl;
    cout << 80 + rand()%21 << endl;

    return 0;
}
