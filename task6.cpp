#include <iostream>
using namespace std;
main()
{
    int days, patients, doctors,total, total1,total2,t1,t2,sumtreated,sumun;
    doctors = 7;
    t1=0;
    t2=0;
    sumtreated=0;
    sumun=0;
    total1 = 0;
    total2 = 0;
    cout << "Enter the number of days: ";
    cin >> days;
    for (int i = 1; i <= days; i++)
    {

        if (i % 3 != 0)
        {
            cout << "Enter the number of patients: ";
            cin >> patients;
            if (patients < doctors)
            {
                total1 = doctors - patients;
                sumtreated=sumtreated+total1;
                
            }
            if (patients > doctors)
            {
                total = patients - doctors;
                sumun=sumun+total;
            }
        }

        if (i % 3 == 0)
        {
            cout << "Enter the number of patients: ";
            cin >> patients;
            doctors++;
            if (patients < doctors)
            {
                total2 = doctors - patients;
                sumtreated=sumtreated+total2;
              
            }
            if (patients > doctors)
            {
                total = patients - doctors;
                sumun=sumun+total;
               
            }
        }
    }
    cout<<sumtreated<<endl;
    cout<<"Unterated Patients are "<<sumun;
}