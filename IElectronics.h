#pragma once
#include <iostream>

using namespace std;


class IElectronics      //Общий абстрактный класс для всей создаваемой техники и её элементов.
{
    public:
        IElectronics() = default;
        virtual void Show()     { cout << " Electronic Device " <<  endl;}
        virtual~IElectronics() = default;
};
