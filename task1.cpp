#include <iostream>
using namespace std;
void printable(int);
int main()
{
    int number=0;
    cout<<"Enter the number: ";
    cin>>number;
    printable(number);

}
void printable(int number)
{
   for(int newnumber=1 ; number<=10 ; number++)
   {
    cout<<number <<" * " <<newnumber <<" = " <<number*newnumber<<endl;

   }
   
}