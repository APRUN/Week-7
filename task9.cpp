#include <iostream>
using namespace std;
void function(int, float, float, int, float);
int main()
{
    int age, toy;
    float toyprice, total, machineprice, totaltoy;
    cout << "Enter the age of Lily: ";
    cin >> age;
    cout << "Enter the unit price of each toy: ";
    cin >> toyprice;
    cout << "Enter the price of Washing machine: ";
    cin >> machineprice;
    function(age, total, toyprice, toy, totaltoy);
}

void function(int age, float total, float toyprice, int toy, float totaltoy)
{
   
    total = (age/2);
    for (int n = 2; n <= age; n++)
    {
        if (n % 2 == 0)
        {
            total = (total + 10);
        }
        else
        {
            toy = toy + toyprice;
        }
    }
    
    total = total + toy;
    cout << total;
}
