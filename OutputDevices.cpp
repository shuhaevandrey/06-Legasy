#include "OutputDevices.h"
#include "IElectronics.h"
#include <iostream>

using namespace std;


    //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    //XXXX   класс "Экран"   XXXXXXXX
    //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX


    Screen::Screen (int screenSize): _screenSize(screenSize)
    {

    }

    void Screen::Show()
    {
        cout << "Screen size in inch : " << _screenSize << endl;
    }



    //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    //XXXX   класс "Телевизор"   XXXXXXXX
    //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX


    TV::TV (int screenSize, string name): Screen(screenSize),_name(name)
    {

    }
    TV::TV (int screenSize): Screen(screenSize)
    {

    }

    void TV::Show()
    {
        cout << "TV / produce of " << _name << " / Screen size: " << _screenSize << " inch" << endl;
    }
