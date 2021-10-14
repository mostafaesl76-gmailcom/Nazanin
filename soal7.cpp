#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    float a;
    float b;
    float c;
    float max;
    cout<<"enter a" ;
    cin>> a;//ab ac    bc
    cout<<"enter b";
    cin>> b;
    cout<<"enter c";
     cin>> c;
     

     if (a>b&&a>c)
      max=a;
        else if(b>c)
            max=b;
            else
                max=c;
     cout<<"max:"<<max;
    getch();            
}



