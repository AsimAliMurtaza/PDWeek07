#include <iostream>
using namespace std;

int isSequence(int triangle);
main()
{
    int triangle;

    cout << "Enter triangle sequence: ";
    cin >> triangle;

    int result = isSequence(triangle);
    cout << result << endl;
}

int isSequence(int triangle)
{
    int i = 0;
    int dots = 0;

    for(i=1; i<=triangle; i = i + 1)
    {
        dots = dots + i;
    }
    return dots;
}