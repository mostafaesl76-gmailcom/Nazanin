#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    float a;
    float b;
    float c;
    float x;



    cout<< "enter a ";
    cin>>a;

    cout<< "enter b ";
    cin>>b;

    cout<< "enter c ";
 cin>>c;
  /*
 

  */

        if  ( pow(a,2)==(pow(b,2)+ pow(c,2)))
            x=b*c/2;
           else if(pow(c,2)==(pow(a,2)+pow(b,2)))
                x=a*b/2;
                else if (( pow(b,2)==(pow(c,2)+pow(a,2))))
                    x=c*a/2;
                    else
                        x=a+b+c;
    cout<<x;
    return 0;
}
