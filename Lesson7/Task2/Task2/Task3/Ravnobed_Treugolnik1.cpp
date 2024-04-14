#include <iostream>
#include "Treugolnik1.h"
#include "Ravnobed_Treugolnik1.h"
#include "ErrorArgument1.h"

Ravnobed_Treugolnik::Ravnobed_Treugolnik(double a, double b, int A, int B, std::string name) : Treugolnik(a, b, a, A, B, A, name)
    {
        kol_storon = 3;
        this->name = name;
       // std::cout << "������ ������: " << name << std::endl;
        this->a = a;
        this->b = b;
        this->c = a;
        this->A = A;
        this->B = B;
        this->C = A;
        if (a!=c)
            throw ErrorArgument("������� a � c �� �����");
        if (A!=C)
            throw ErrorArgument("���� � � � �� �����");
    }
    void Ravnobed_Treugolnik::proverka()
    {
        if (A + B + C == 180 and a == c and A == C)
        {
            std::cout << "����������" << std::endl;
        }
        else
        {
            std::cout << "������������" << std::endl;
        }
    }