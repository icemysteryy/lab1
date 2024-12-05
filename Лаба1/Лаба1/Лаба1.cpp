
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");

    cout << "Задание 1\n"
    << "int: " << sizeof(int) << "\n"
    << "short int: " << sizeof(short int) << "\n"
    << "long int: " << sizeof(long int) << "\n"
    << "float: " << sizeof(float) << "\n"
    << "double: " << sizeof(double) << "\n"
    << "lond double: " << sizeof(long double) << "\n"
    << "char: " << sizeof(char) << "\n"
    << "bool: " << sizeof(bool) << "\n\n";

    cout << "Задание 2\n"
         << "Введите число: ";
    int chislo;
    cin >> chislo;
    unsigned int razryad = sizeof(int) * 8;
    unsigned int mask = 1 << razryad - 1;
    for (int i = 1; i <= razryad - 1; i++)
    {
        putchar(chislo & mask ? '1' : '0');
        chislo <<= 1;
        if (i % razryad == 1 || i % 8 == 0) {putchar(' ');}
    }

    cout << "\n\nЗадание 3\n";
    union 
    {
        float fl_chislo;
        int fl_int;
    };
    unsigned int fl_razr = sizeof(float) * 8;
    mask = 1 << fl_razr - 1;
    cout << "Введите десятичную дробь: ";
    cin >> fl_chislo;
    for (int i = 1; i <= fl_razr - 1; i++)
    {
        putchar(fl_int & mask ? '1' : '0');
        mask <<= 1;
        if (i == 0 || i == 8) { putchar(' ');}
    }
    return 0;
}
