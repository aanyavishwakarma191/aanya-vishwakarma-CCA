#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks;
};

int main()
{
    Student s1;

    cout << "Enter roll number: ";
    cin >> s1.rollNo;

    cout << "Enter name: ";
    cin >> s1.name;

    cout << "Enter marks: ";
    cin >> s1.marks;

    cout << "\nStudent Details\n";
    cout << "Roll Number: " << s1.rollNo << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
/*Enter roll number: 5
Enter name: aanya
Enter marks: 99

Student Details
Roll Number: 5
Name: aanya
Marks: 99*/