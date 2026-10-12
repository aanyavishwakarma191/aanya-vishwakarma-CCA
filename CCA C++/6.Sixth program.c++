//Traffic Lights
#include <iostream>
using namespace std;

enum Signal
{
    RED, YELLOW, GREEN
};

int main()
{
    Signal light = RED;

    if(light == RED)
    {
        cout << "WAITTTTT MADIII" << endl ;
    }
    else if(light == YELLOW)
    {
        cout << "BE preparedddddd"<< endl ;
    }
    else
    {
        cout << "GOOOOO GANGGGGG" << endl ;
    }

    return 0;
}