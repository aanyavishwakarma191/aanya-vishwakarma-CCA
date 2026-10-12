#include <iostream>
using namespace std;

int main()
{
    int num = 25;

    int *ptr = &num;

    cout << "Value of num = " << num << endl;
    cout << "Address of num = " << &num << endl;
    cout << "Address stored in pointer = " << ptr;

    return 0;
}