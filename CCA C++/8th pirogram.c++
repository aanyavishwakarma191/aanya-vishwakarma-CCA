#include <iostream>
using namespace std;

enum Season
{
    Summer = 1,
    Rainy,
    Winter
};

int main()
{
    int choice;

    cout << "Choose a season:\n";
    cout << "1. Summer\n";
    cout << "2. Rainy\n";
    cout << "3. Winter\n";
    cin >> choice;

    Season s = static_cast<Season>(choice);

    switch(s)
    {
        case Summer:
            cout << "It is summer season.";
            break;

        case Rainy:
            cout << "It is rainy season.";
            break;

        case Winter:
            cout << "It is winter season.";
            break;

        default:
            cout << "Invalid choice.";
    }

    return 0;
}
/*
Choose a season:
1. Summer
2. Rainy
3. Winter
3 this is the input
It is winter season.*/