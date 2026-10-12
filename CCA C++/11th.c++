#include <iostream>
using namespace std;

struct Rectangle
{
    float length;
    float breadth;
};

int main()
{
    Rectangle r;

    cout << "Enter length: ";
    cin >> r.length;

    cout << "Enter breadth: ";
    cin >> r.breadth;

    float area = r.length * r.breadth;

    cout << "Area of rectangle = " << area;

    return 0;
}