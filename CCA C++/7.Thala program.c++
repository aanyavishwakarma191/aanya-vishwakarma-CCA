//REsults
#include <iostream>
using namespace std;

enum Result
{
    FAIL, PASS
};

int main()
{
    int marks;

    cout << "Enter marks:   ";
    cin >> marks;

    Result r;

    if(marks >= 40 && marks <= 100)
    {
        r = PASS;
    }
    else
    {
        r = FAIL;
    }

    if(r == PASS)
        cout << "Student has passed.";
    else
        cout << "Student has failed.";

    return 0;
}