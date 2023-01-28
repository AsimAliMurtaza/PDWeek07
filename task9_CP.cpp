#include <iostream>
using namespace std;

void opposingTriangle(int rows);

main()
{
    int rows;

    cout << "Enter no of rows: ";
    cin >> rows;

    opposingTriangle(rows);
}

void opposingTriangle(int rows)
{
    for(int i=1; i<=rows; i = i + 1)
    {
        for(int j = 1; j<=i; j = j + 1)
        {
            cout << "*";
        }
        for(int k = rows; k>=i; k = k-1)
        {
            cout << " ";
        }
        for(int j = i; j <=rows; j = j+1)
        {
            cout << " ";
        }
        for(int l = 1; l<=i; l = l+1)
        {
            cout << "*";
        }

        cout << endl;
    }

}