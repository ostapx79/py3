#include <iostream>

int main(){

    using namespace std;
    int first_numb, second_numb, max_numb;

    cout << "Введите первое целое число => ";
    cin >> first_numb;
    cout << "Введите второе целое число => ";
    cin >> second_numb;

    max_numb = first_numb;
    if (second_numb > first_numb){
        max_numb = second_numb;
    }

    cout << "Максимум из двух чисел => ";
    cout << max_numb << endl;

    return 0;
}
