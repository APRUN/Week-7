#include <iostream>
using namespace std;
main()
{
    int n,count2,count3,count4;
    count2=0;
    count3=0;
    count4=0;
    float p1=0;
    float p2=0;
    float p3=0;
    cout<<"Enter the number of numbers: ";
    cin>>n;
    for(int i=1; i<=n ; i++)
    {
        int number=0;
        cout<<"Enter the number: ";
        cin>>number;
      if(number%2==0)
      {
        count2++;
      }
      if(number%3==0)
      {
        count3++;
      }
      if(number%4==0)
      {
        count4++;
      }
      
      
    }
    p1=(count2*100);
   
    p2=(count3*100);

    p3=(count4*100);

    p1=p1/n;
    p2=p2/n;
    p3=p3/n;

    cout<<"Divisible by 2: "<<p1<<"%"<<endl;
    cout<<"Divisible by 3: "<<p2<<"%"<<endl;
    cout<<"Divisible by 4: "<<p3<<"%"<<endl;

    
}
