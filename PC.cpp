#include "PC.h"
#include <iostream>

using namespace std;


PC::PC(string ctrlType, int cpuGgz, int screenSize, string name): GameBox(ctrlType, cpuGgz), TV(screenSize, name)
{

}

PC::PC(string ctrlType, int cpuGgz, int screenSize): GameBox(ctrlType, cpuGgz), TV(screenSize)
{
    _name = "Office PC";
}

PC::PC (string ctrlType, int cpuGgz): GameBox(ctrlType, cpuGgz)
{
    _name = "Office PC";
    _screenSize = 19;
}

PC::PC (string ctrlType): GameBox(ctrlType)
{
    _name = "Office PC";
    _screenSize = 19;
}


void PC::Show()
{
    cout << _name << " / CPU Speed - " << _cpuGgz << " Gz / Controller type - " << _ctrlType << " / Monitor size - " << _screenSize << " inch" << endl;
}
