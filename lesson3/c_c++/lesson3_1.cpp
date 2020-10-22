#include <iostream>

int main(){
    
    // Ветвления, условнный оператор.
    
    int first_numb, second_numb, max_numb;

    std::cout << "Введите любое первое целое число => ";
    std::cin >> first_numb;
    std::cout << "Введите любое второе целое число => ";
    std::cin >> second_numb;

    if (first_numb > second_numb){
        max_numb = first_numb;
    } else {
        max_numb = second_numb;
    }

    std::cout << "Максимальное целое число из двух указынных => ";
    std::cout << max_numb << std::endl;
    
    return 0;
}
