#include <iostream>
#include "Chetirehugolnik1.h"
#include "Parallelogramm1.h"
#include "ErrorArgument1.h"

Parallelogramm::Parallelogramm(double a, double b, int A, int B, std::string name) : Chetirehugolnik(a, b, a, b, A, B, A, B, name)
    {
        kol_storon = 4;
        this->name = name;
      //  std::cout << "������ ������: " << name << std::endl;
        this->a = a;
        this->b = b;
        this->c = a;
        this->d = b;
        this->A = A;
        this->B = B;
        this->C = A;
        this->D = B;
        if (a != c and b != d)
            throw ErrorArgument("������� ������� �� �����");
        if (A != C and B != D)
            throw ErrorArgument("������� ������� �� �����");
    }
    void Parallelogramm::proverka()
    {
        if (A + B + C + D == 360 and a == c and b == d and A == C and B == D)
        {
            std::cout << "����������" << std::endl;
        }
        else
        {
            std::cout << "������������" << std::endl;
        }
    }