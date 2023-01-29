#include <iostream>
using namespace std;

main()
{
  int b900;
  float n;
  cout << "Enter the number: ";
  cin >> n;
  float b200;
  float b400 ;
  float  b600;
  float b800
  ;
  int a;
  for (int cond = 1; cond <= n; cond++)
  {
    cout << "enter the number: ";
    cin >> a;
    if (a < 200)
    {
      
 b200++;
    }
    if (a >= 200 && a < 400)
    {
 b400++;
    }
    if (a >= 400 && a < 600)
    {
 b600++;
    }
    if (a >= 600 && a < 800)
    {
 b800++;
    }
    if (a >= 800)
    {
 b900++;
    }

  }
   float p1=0;
   float p2=0;
   float p3=0;
   float p4=0;
   float p5=0;
  
  

    p1=b200/n*100;
    p2=b400/n*100;
    p3=b600/n*100;
    p4=b800/n*100;
    p5=b900/n*100;
    cout<<p1<<endl<<p2<<endl<<p3<<endl<<p4<<endl<<p5<<endl;
}
