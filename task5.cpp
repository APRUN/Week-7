#include<iostream>
using namespace std;
main()
{
    int dots,sum;
    sum=0;
    cout<<"Enter the number of Dots: ";
    cin>>dots;
    for(int i=1; i<=dots; i++)
    {
       sum=sum+i;
      
    }
    cout<<sum;
}