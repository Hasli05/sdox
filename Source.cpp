#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

    setlocale(LC_ALL, "rus");
    int x;
    x = 1000;
    while (x != -1)
    {
        cout << x << " - 7" << endl;
        x = x - 7;
        Sleep(100);
    }
    cout << "Бодя лох" << endl;
}