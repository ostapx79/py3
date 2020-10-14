#include <iostream>
#include <cstdlib>

int main()
{
    // генерируем пять случайных чисел меньше чем 100;
    
    using namespace std;
    cout << rand()%100 << endl;
    cout << rand()%100 << endl;
    cout << rand()%100 << endl;
    cout << rand()%100 << endl;
    cout << rand()%100 << endl;

    return 0;
}
