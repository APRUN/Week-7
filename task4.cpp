#include <iostream>
using namespace std;
main()
{
    int number;
    cout<<"Enter the number to be amplified: ";
    cin>>number; 
    for(int n=1; n<=number; n++)
     {
        if(n%4==0)
        {
            cout<<n*10<<" ";
        }
        if(n%4!=0)
        {
           cout<<n<<"  ";
        }
           
        
     }
}