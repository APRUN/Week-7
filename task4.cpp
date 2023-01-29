#include <iostream>
using namespace std;
int function(int,int,int,int);
main()
{
    int number,count,digit,n1;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<"Enter the digit: ";
    cin>>digit;
    count=0;
count=function(number,count,digit,n1);
cout<<count;



}

int function(int number,int count,int digit,int n1)
{
    while(number>0)
    {
   
    n1=number%10;
    number=number/10;
    if(n1==digit)
    {
     count=count+1;
     
    
    }
    else
    {
        n1=number%10;
    }
    }
    return count;
}

