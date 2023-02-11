#include <iostream>
using namespace std;
main()
{
    float totalweight,avgprice,cargonum,weight,singweight,minibus,train,truck,truckprice,minibusprice,trainprice;
    weight=0;
    cout<<"Enter the number of cargo: ";
    cin>>cargonum;
    cout<<"Enter the total weight of cargo: ";
    cin>>totalweight;
    totalweight+=weight;
    for(int i=0; i<cargonum; i++)
    {
        cout<<"Enter the weight: ";
        cin>>singweight;
          if(singweight<=3)
          {
            minibus+=singweight;
          }
          else if(singweight>3 && singweight<=11)
          {
              truck+=singweight;
          }
          else
          {
            train+=singweight;
          }
    }

        


       minibusprice=minibus*200;
       truckprice=truck*175;
       trainprice=train*120;
       avgprice=(minibusprice+truckprice+trainprice)/totalweight;
       cout<<"The Average price is: "<<avgprice<<endl;

       minibus=(minibus/totalweight)*100;
      truck=(truck/totalweight)*100;
      train=(train/totalweight)*100;
      cout<<"For minibus: "<<minibus<<"%"<<endl;
       cout<<"For truck: "<<truck<<"%"<<endl;
        cout<<"For train: "<<train<<"%"<<endl;
}