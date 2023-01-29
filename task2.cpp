#include<iostream>
using namespace std;
void series();
int main()
{

    series();
}
void series()
{
    int n1=0;
    int n2=1;
    int result;
    cout<<n1 <<" " <<n2;
    for(int n=0; n<=9 ;n++)
    {
       
       result=n1+n2;
       cout<<result<<" ";
       n1=n2;
       n2=result;

    }
}