#pragma once
#include "IElectronics.h"


//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//XXXX��   ����� "�����"   XXXXXXXXX
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

class Screen: virtual public IElectronics
{
    protected:
        int _screenSize = 31;

    public:
        Screen (int screenSize);
        Screen () = default;
        virtual void Show()override;
        virtual~Screen() = default;
};


//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//XXXX   ����� "���������"   XXXXXXXX
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

class TV: public Screen
{
    protected:
        string _name = "unknown";

    public:
        TV (int screenSize, string name);
        TV (int screenSize);
        TV() = default;
        virtual~TV() = default;
        virtual void Show()override;

};
