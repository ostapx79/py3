#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m, p, y, r;
    double result;

    cout << "Введите суму вклада: " << endl;
    cin >> m;
    cout << "Сколько процентов годовых: " << endl;
    cin >> p;
    cout << "На какой срок времени: " << endl;
    cin >> y;

    result = pow((1 + p / 100.), y);
    r = m * result;

    cout << "В конце года вы получите: " << r << "рублей" << endl;
}
