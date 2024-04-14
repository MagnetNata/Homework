#include <iostream>
#include "Figura1.h"
#include "Treugolnik1.h"
#include "ErrorArgument1.h"

Treugolnik::Treugolnik(double a, double b, double c, int A, int B, int C, std::string name) : Figura()
{
    kol_storon = 3;
    this->name = name;
    std::cout << "������ ������: " << name << std::endl;
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    if (kol_storon != 3)
        throw ErrorArgument("���������� ������ ������������ �� ����� ����");
    if (A + B + C != 180)
        throw ErrorArgument("����� ����� ������������ �� ����� 180");
    std::cout << name << "(";
    std::cout << "c������ " << get_a() << ", " << get_b() << " , " << get_c();
    std::cout << "; ���� " << get_A() << ", " << get_B() << ", " << get_C() << ")";
    std::cout << " ������" << std::endl;
    std::cout << std::endl;
}
double Treugolnik::get_a()
{
    return a;
    }
    double Treugolnik::get_b()
    {
        return b;
    }
    double Treugolnik::get_c()
    {
        return c;
    }
    int Treugolnik::get_A()
    {
        return A;
    }
    int Treugolnik::get_B()
    {
        return B;
    }
    int Treugolnik::get_C()
    {
        return C;
    }