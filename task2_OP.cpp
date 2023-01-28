#include <iostream>
using namespace std;

void isRows(int);
main()
{
    int rows;

    cout << "Enter no of rows: ";
    cin >> rows;
    
    isRows(rows);
}

void isRows(int rows)
{
    for(int count=1; count<=rows; count = count + 1)
    {
        for(int count2 = rows; count2>=count; count2 = count2 - 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}