#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    using namespace std;
    srand(time(NULL));
    cout << 80 + rand()%(100 - 79) << endl;
    cout << 80 + rand()%(100 - 80 + 1) << endl;
    cout << 80 + rand()%(100 - 80 + 1) << endl;
    cout << 80 + rand()%21 << endl;
    cout << 80 + rand()%21 << endl;

    return 0;
}
