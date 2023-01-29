#include <iostream>
using namespace std;
main()//task12
{
int n1,n2;
cout<<"Enter the 1st number: ";
cin>>n1;
cout<<"Enter the 2nd number: ";
cin>>n2;

        int gcd;
for(int n=1; n<n1 && n<n2 ;n++)
{
     if(n1%n==0 && n2%n==0)
     {
        gcd=n;
     }

  
}
        cout<<gcd;
        int lcm;
        lcm=(n1*n2)/gcd;
}

