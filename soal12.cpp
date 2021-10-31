#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
   float a,b,c,delta,x1,x2;
   cout<<"enter a"<<endl;
    cin>>a;

   cout<<"enter b"<<endl ;
     cin>>b;

   cout<<"enter c"<<endl;
     cin>>c;

    delta=b*b-(4*a*c);
    cout<<"delta"<<delta<<endl;

    if(delta >0){
    cout<<"2 rishe"<<endl;
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);

   cout<<"x1,x2"<<endl<<x1<<"\n"<<x2;
 }
    else if(delta ==0){
    cout<<"1 rishe"<<endl;

     x1=-b+sqrt(delta)/2*a;
     cout<<x1;
}
     else
     cout<< "bi rishe";
    



         
                 
    return 0;
}
