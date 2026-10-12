//
#include <iostream>
using namespace std;

int main()
{
    int marks[5], sum = 0;

    cout << "Enter The marks for the five subjects : " << endl ;

    for(int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        sum = sum + marks[i];
    }

    cout << "Total marks = " << sum;

    return 0;
}
/*
Enter The marks for the five subjects : 
34
45
67
78
89
Total marks = 313*/