#pragma once
#include <iostream>

using namespace std;


class IElectronics      //����� ����������� ����� ��� ���� ����������� ������� � � ���������.
{
    public:
        IElectronics() = default;
        virtual void Show()     { cout << " Electronic Device " <<  endl;}
        virtual~IElectronics() = default;
};
