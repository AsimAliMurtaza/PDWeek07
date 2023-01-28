#include <iostream>
using namespace std;

void isSequence(int);
main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;
    isSequence(number);
}

void isSequence(int number)
{
    for(int i=1; i<=number; i=i+1)
    {
        if(i % 4==0)
        {
            int num = i * 10;
            cout << num << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}