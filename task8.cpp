#include <iostream>
using namespace std;
float calculate(float, int, int, int);
int main()
{
    int travellingyear, totalmoney, year;
    float inheritence, money;
    travellingyear = 0;
    inheritence = 0;
    year = 0;
    money = 0;
    cout << "Enter the money of inheritence: ";
    cin >> inheritence;
    totalmoney = inheritence;
    cout << "Enter the year Ivan don't want to work: ";
    cin >> travellingyear;
    totalmoney = calculate(money, year, travellingyear, totalmoney);
    if (totalmoney > 0)
    {
        cout << "Yes he has enough money to live till " << travellingyear << " and left with " << totalmoney << " Dollars";
    }
    else
    {
        cout << "No!he don't has enough money to live till " << travellingyear << " and left with " << totalmoney << " Dollars.";
    }
}
float calculate(float money, int year, int travellingyear, int totalmoney)
{

    for (int year = 1800; year <= travellingyear; year++)
    {
        if (year % 2 == 0)
        {
            totalmoney = totalmoney - 12000;
        }
        if (year % 2 != 0)
        {
            totalmoney -= 12000 + 50 * (year + 18 - 1800);
        }
    }
    return totalmoney;
}