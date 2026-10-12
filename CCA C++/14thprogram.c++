#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int *p = &a;

    cout << "Before changing: " << a << endl;

    *p = 50;

    cout << "After changing: " << a;

    return 0;
}