#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    int coordinate_x1, coordinate_x2, coordinate_y1, coordinate_y2, distance;

    cout << "Введите координата x1 - ";
    cin >> coordinate_x1;
    cout << "Введите координата x2 - ";
    cin >> coordinate_x2;
    cout << "Введите координата y1 - ";
    cin >> coordinate_y1;
    cout << "Введите координата y2 - ";
    cin >> coordinate_y2;

    distance = sqrt(pow(coordinate_x2 - coordinate_x1, 2) + pow(coordinate_y2 - coordinate_y1, 2));
    cout << "Расстояние между координата двух точек на  числовой оси - " <<  distance << endl;

    return 0;
}

