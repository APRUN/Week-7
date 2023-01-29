#include <iostream>
using namespace std;
int function(int,int);
main()
{
    int number,count;
    cout<<"Enter the number: ";
    cin>>number;
    count=function(count,number);
    cout<<count;
}
int function(int count, int number)
{
    count=0;
    while(number>0)
    {
   
    number=number/10;
     count=count+1;
    }
    return count;
}


