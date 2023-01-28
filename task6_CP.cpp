#include <iostream>
using namespace std;

main()
{
    int days = 0;
    int patients = 0;
    int untreatedPatients = 0;
    int treatedPatients = 0;
    int doctors = 7;

    cout << "Enter days: ";
    cin >> days;

    for(int i = 1; i<=days; i++)
    {
        cout << "Enter number of Patients in one day: ";
        cin >> patients;
        
        if (i % 3 == 0)
        {
            if(untreatedPatients>treatedPatients)
            {
                doctors = doctors + 1;
            }
        }
        if(patients<=doctors)
        {
            treatedPatients = treatedPatients + patients;
        }
        else
        {
            treatedPatients = treatedPatients + doctors;
            untreatedPatients = untreatedPatients + (patients - doctors);
        }

    }
    cout << "treated Patients: " << treatedPatients << endl;
    cout << "untreated patients: " << untreatedPatients << endl;
}

