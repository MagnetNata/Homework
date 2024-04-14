#include <iostream>
#include "Pryamougolnik1.h"
#include "Kvadrat1.h"
#include "ErrorArgument1.h"

Kvadrat::Kvadrat(double a, std::string name) : Pryamougolnik(a, a, name)
    {
        kol_storon = 4;
        this->name = name;
        //std::cout << "������ ������: " << name << std::endl;
        this->a = a;
        this->b = a;
        this->c = a;
        this->d = a;
        this->A = 90;
        this->B = 90;
        this->C = 90;
        this->D = 90;
        if (a != b and b!=c and c!=d)
            throw ErrorArgument("������� �� �����");
        if (A != B and B != C and C != D)
            throw ErrorArgument("���� �� �����");
    }
    void Kvadrat::proverka()
    {
        if (A + B + C + D == 360 and a == b and b == c and c == d and A == B and B == C and C == D)
        {
            std::cout << "����������" << std::endl;
        }
        else
        {
            std::cout << "������������" << std::endl;
        }
    }
