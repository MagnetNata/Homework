#include <iostream>
#include "Parallelogramm1.h"
#include "Romb1.h"
#include "ErrorArgument1.h"

Romb::Romb(double a, int A, int B, std::string name) : Parallelogramm(a, a, A, B, name)
    {
        kol_storon = 4;
        this->name = name;
       // std::cout << "������ ������: " << name << std::endl;
        this->a = a;
        this->b = a;
        this->c = a;
        this->d = a;
        this->A = A;
        this->B = B;
        this->C = A;
        this->D = B;
        if (a != b and b != c and c != d)
            throw ErrorArgument("������� �� �����");
        if (A != C and B != D)
            throw ErrorArgument("������� ������� �� �����");
    }
    void Romb::proverka()
    {
        if (A + B + C + D == 360 and a == b and b == c and c == d and A == C and B == D)
        {
            std::cout << "����������" << std::endl;
        }
        else
        {
            std::cout << "������������" << std::endl;
        }
    }