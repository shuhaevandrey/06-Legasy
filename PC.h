#pragma once
#include "InputDevices.h"
#include "OutputDevices.h"

class PC final: public GameBox, public TV
{
    public:
        PC(string ctrlType, int cpuGgz, int screenSize, string name);
        PC(string ctrlType, int cpuGgz, int screenSize);
        PC(string ctrlType, int cpuGgz);
        PC(string ctrlType);
        void Show();
        ~PC() = default;

};
