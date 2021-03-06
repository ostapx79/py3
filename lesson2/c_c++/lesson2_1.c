#include <stdio.h>

int main()
{
    /* В языке Си Си++ используются следующие основные типы данных.
     * Целые значения - int; В памяти выделяется 2байта или 4байта (зависит от
     * версий языка.
     * Вещественные значения - float; В памяти выделяется 4байта.
     * Логические значения - boolean; В памяти выделяется 1байт.
     * Символ (в памяти хранятся код символа) - char; В памяти выделяется 1байт.
     *
     * Существуют также и расширенные типы данных, для работы с большими числами.
     * Длинное целое число - long int; В памяти выделяется 4байта или 8байта.
     * Длинное вещественное число двоичной точности - double; В памяти выделятся
     * 8байта.
     */
    // Тип char. 
    char ch = 90; // его размер от -128 до 127, знаковый тип.
    unsigned char uch = 'z'; // его размер от 0 до 255, без знаковый тип.
    printf("%c %c\n", ch, uch);

    // Тип short,
    short iShort = 0; // его размер от -32768 до 32767, знаковый тип.
    unsigned short iuShort = 0; // его размер от 0 до 65535, без знаковый тип.

    // Арифметические выражения и операции.
    int a, c, d;
    c = 3;
    d = 7;
    /* Тут вычисляется приоритет операции,
     * первое действие будет вычислено значения в скобках а потом деление и
     * умножение. В языке Си и Си++ вычисляется как в математике: больше
     * приоритет имеет то что находится в скобках, потом умножение деление и
     * взятие остатка от деление. Они равны, вычисляется с лева на право. Потом
     * сложение и вычитание, тоже ровны, вычисляется с лева на права.
     * 1. действия в скобках
     * 2. умножен, деление, и взятие остатка
     * 3. сложение, вычитание
     */
    a = (c + 5 - 1) / 2 * d;

    printf("%d\n", a); // результатом будет 21

   return 0; 
}
