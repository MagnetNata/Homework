﻿#include <iostream>
#include "Counterr.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    std::system("chcp 1251");
    std::string s, kom;
    int a;
    Counter c;
    std::cout << "\nВы хотите указать начальное значение счётчика ? Введите да или нет :";
    std::cin >> s;
    if (s == "да")
    {
        std::cout << "\nВведите начальное значение счётчика :";
        std::cin >> a;
        c.setX(a);
    }
    do
    {
        std::cout << "\nВведите команду('+', '-', '=' или 'x') :";
        std::cin >> kom;
        if (kom == "+")
        {
            c.bolshe();
        }
        if (kom == "-")
        {
            c.menshe();
        }
        if (kom == "=")
        {
            c.prosmotr();
        }
    } while (kom != "х");
    std::cout << "\nДо свидания!";
    return 0;
}