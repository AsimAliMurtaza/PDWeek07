#include <iostream>
using namespace std;

void upperTriangle(int);
void lowerTriangle(int);
main()
{
    int rows;

    cout << "Enter no of rows: ";
    cin >> rows;

    upperTriangle(rows);
    lowerTriangle(rows);
}

void upperTriangle(int rows)
{
    int i = 0;
    int j = 0;
    int k = 0;

    for(i=1; i<=rows/2; i = i + 1)
    {
        for(j = rows/2; j>=i; j = j - 1)
        {
            cout << " ";
        }

        for(k = 1; k<=i; k = k + 1)
        {
            cout << "*";
        }
        cout << endl;
    }

}
void lowerTriangle(int rows)
{
    int i = 0;
    int j = 0;
    int k = 0;

    for(i=1; i<=rows/2; i = i + 1)
    {
        for(j = 1; j<=i; j = j + 1)
        {
            cout << " ";
        }

        for(k = rows/2; k>=i; k = k - 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}
