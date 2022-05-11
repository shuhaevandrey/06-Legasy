#pragma once
#include "IElectronics.h"


//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//XXXX   ����� "����������"   XXXXXXXX
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX


class Ctrl: virtual public IElectronics
{
    protected:
        string _ctrlType = "GamePad";

    public:
        Ctrl (string ctrlType);
        Ctrl () = default;
        virtual void Show()override;
        virtual~Ctrl() = default;
};

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX�������
//XXXX   ����� "������� ���������"   XXXXXXXX
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX�������

class GameBox: public Ctrl
{
    protected:
        int _cpuGgz = 3500;

    public:
        GameBox (string ctrlType, int cpuGgz);
        GameBox (string ctrlType);
        GameBox() = default;
        virtual void Show();
        virtual~GameBox() = default;

};

