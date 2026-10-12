//Largest element ia an array
#include <iostream>
using namespace std;

int main()
{
    int num[5];

    cout << "Enter THREE numbers : " << endl ;

    for(int i = 0; i < 3; i++)
    {
        cin >> num[i];
    }

    int Largest = num[0];

    for(int i = 1; i < 3; i++)
    {
        if(num[i] > Largest)
        {
            Largest = num[i];
        }
    }

    cout << "Largest number : " << Largest;

    return 0;
}