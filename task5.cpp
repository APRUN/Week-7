#include <iostream>
using namespace std;
int function(int , int, int);
main()
{
   int fnumber,num2,num3,count;
   cout<<"Enter the number: ";
   cin>>fnumber;
   count=function(fnumber,num2,count);
   cout<<count;

}
int function(int fnumber, int num2,int count)
{
       count=0;
   while(fnumber>0)
   {
     num2=fnumber%10;
     fnumber=fnumber/10;
    count=count+num2;
   }
    cout<<count;
}