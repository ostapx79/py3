//: lesson3/c_c++/homework/homework3_10.cpp
#include <iostream>

int main() {
    int coordinate_x, coordinate_y;
    printf("Введите первую координату coordinate_x => ");
    scanf("%d", &coordinate_x);
    printf("Введите вторую координату coordinate_y => ");
    scanf("%d", &coordinate_y);

    if (coordinate_x > 0 && coordinate_y <= 1) {
        printf("Вы попали в заштрихованую плоскасть.\n");
    } else if (coordinate_x < 0 && coordinate_y <= 1)  {
        printf("Вы попали в заштрихованую плоскасть.\n");
    } else if (coordinate_x > 0 && coordinate_y < 0) {
        printf("Вы попали в зыштрихованую плоскасть.\n");
    } else if (coordinate_x < 0 && coordinate_y < 0) {
        printf("Вы попали в заштрихованую плоскасть.\n");
    } else {
        printf("Вы не попали в заштрихованую плоскасть.\n");
    }
    return 0;
}
