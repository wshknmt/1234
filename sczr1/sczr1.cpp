

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    bool x = PlaySound(TEXT("x.wav"), NULL, SND_SYNC);
    return 0;
}
