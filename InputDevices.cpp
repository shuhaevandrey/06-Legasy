#include "InputDevices.h"
#include "IElectronics.h"
#include <iostream>

using namespace std;




    //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    //XXXX   класс "Контроллер"   XXXXXXXX
    //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

    Ctrl::Ctrl(string ctrlType): _ctrlType(ctrlType)
    {

    }

    void Ctrl::Show()
    {
        cout << "Control Type : " << _ctrlType << endl;
    }


    //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXХХХХХХХ
    //XXXX   класс "Игровая приставка"   XXXXXXXX
    //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXХХХХХХХ

    GameBox::GameBox(string ctrlType, int cpuGgz): Ctrl(ctrlType), _cpuGgz(cpuGgz)
    {

    }

    GameBox::GameBox(string ctrlType): Ctrl(ctrlType)
    {

    }

    void GameBox::Show()
    {
        cout << "GameBox / Control Type : " << _ctrlType << "  / CPU Speed : " << _cpuGgz << " Gz " << endl;
    }
