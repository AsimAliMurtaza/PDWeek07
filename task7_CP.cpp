#include <iostream>
using namespace std;

void isPercent(float range);

main()
{
    float range;
    cout << "Enter range: ";
    cin >> range;
    isPercent(range);
}

void isPercent(float range)
{
    int number;
    float number1 = 0;
    float number2 = 0;
    float number3 = 0;
    float percentOne;
    float percentTwo;
    float percentThree;

    for(float counter = 1; counter<=range; counter = counter + 1)
    {
        cout << "Enter number: ";
        cin >> number;

        if(number%2==0)
        {
            number1 = number1 + 1;
        }

        if(number%3==0)
        {
            number2 = number2 + 1;
        }

        if(number%4==0)
        {
            number3 = number3 + 1;
        }

        percentOne = ((number1 / range) * 100);
        percentTwo = ((number2 / range) * 100);
        percentThree = ((number3 / range) * 100);
    }

        cout << "Divisible by 2 : " << percentOne << "%" << endl;
        cout << "Divisible by 3 : " << percentTwo << "%" << endl;
        cout << "Divisible by 4 : " << percentThree << "%" << endl;

}