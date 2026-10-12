//Avertage of numbers
#include <iostream>
using namespace std;

int main()
{
    int marks[7];
    int total = 0;

    cout << "Enter marks of seven subjects: " << endl ;



    for(int i = 0; i < 7; i++)
    {
        cin   >>     marks[i];
        total += marks[i];
    }

    float average = total / 7;

    cout << "Average marks = " << average;

    return 0;
}
//output
/*
Enter marks of seven subjects: 
23
67
90
78
56
34
67
Average marks = 59*/