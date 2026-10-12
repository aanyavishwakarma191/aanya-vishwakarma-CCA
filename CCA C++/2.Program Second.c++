//Sum of elements
#include <iostream>
using namespace std;

int main()
{
    int marks[5], sum = 0;

    cout << "Enter marks of 5 subjects : " << endl ;

    for(int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        sum = sum + marks[i];
    }

    cout << "Total marks = " << sum;

    return 0;
}
/*
Enter marks of 5 subjects : 
34
45
23
45
40
Total marks = 187*/