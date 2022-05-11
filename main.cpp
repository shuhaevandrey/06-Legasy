#include "PC.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL,"RUS");
    IElectronics* device[5];

    device[0] = new PC("Mouse", 2500, 21);
    device[1] = new TV(29, "Philips");
    device[2] = new PC("Mouse", 3900, 30, "Game PC");
    device[3] = new GameBox();
    device[4] = new GameBox("Joystick",1000);


    bool open = true;

    while (open)
    {
        cout << "�������� ������� : " << endl << "1 - �������� ��" << endl << "2 - ���������" << endl << "3 - ������� ��" << endl << "4 - ������� ���������" << endl << "5 - ������� ��������� (�����)" << endl << "0 ����� �����" << endl << endl;

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            device[0] -> Show();
            break;

        case 2:
            device[1] -> Show();
            break;

        case 3:
            device[2] -> Show();
            break;

        case 4:
            device[3] -> Show();
            break;

        case 5:
            device[4] -> Show();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "�������� ���������� �� 1 �� 5 ��� 0, ����� �����" << endl << endl;
            break;
        }
        cout << endl << endl;
    }


    delete device[0];
    delete device[1];
    delete device[2];
    delete device[3];
    delete device[4];

    return 0;
}
