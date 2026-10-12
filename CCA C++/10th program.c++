#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
};

int main()
{
    Student s[3];

    for(int i = 0; i < 3; i++)
    {
        cout << "Enter roll number and name: ";
        cin >> s[i].roll >> s[i].name;
    }

    cout << "\nStudent List\n";

    for(int i = 0; i < 3; i++)
    {
        cout << s[i].roll << " "
             << s[i].name << endl;
    }

    return 0;
}