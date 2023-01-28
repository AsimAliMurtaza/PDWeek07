#include <iostream>
using namespace std;

void isPercent(int);

main()
{
    int cargo;

    cout << "Enter number of cargos: ";
    cin >> cargo;

    isPercent(cargo);
}

void isPercent(int cargo)
{
    int number;
    float bus = 0;
    float truck = 0;
    float train = 0;
    float percentOne;
    float percentTwo;
    float percentThree;
    int totalCargo;
    int sumBus = 0;
    int sumTruck = 0;
    int sumTrain = 0;
    float avg = 0;

    for(float counter = 1; counter<=cargo; counter = counter + 1)
    {

        cout << "Enter cargo: ";
        cin >> number;
        if(number<=3)
        {
            bus = bus + number;

        }

        if(number>3 && number<=11)
        {
            truck = truck + number;

        }

        if(number>11)
        {
            train = train + number;

        }
    }
        totalCargo = bus + truck + train;
        percentOne = ((bus / totalCargo) * 100);
        percentTwo = ((truck / totalCargo) * 100);
        percentThree = ((train / totalCargo) * 100);
        avg = (bus * 200 + truck * 175 + train * 120) / totalCargo;

        cout << "Cargo on minibus : " << percentOne << "%" << endl;
        cout << "Cargo on truck : " << percentTwo << "%" << endl;
        cout << "Cargo on train : " << percentThree << "%" << endl;
        cout << "Average price per ton = " << avg << endl;
}