#include <iostream>
using namespace std;
void function1(int);
main()

{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int n = 1; n < rows; n++)
    {
        for (int j = 1; j < rows - n; j++)
        {
            cout << " ";
        }
        for (int m = 1; m <= n; m++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int n = 1; n < rows; n++)
    {
        for (int m = 1; m <= n; m++)
        {
            cout << " ";
        }
        for (int j = 1; j < rows - n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
