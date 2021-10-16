#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout<<"enter your month number: ";
    cin>>a;
    if (a>=1&&a<=6)
       cout<<"31 day";
       else if (a>6&&a<12)
            cout<<"30 day";
                else if(a==12)   
                    cout<<"29 day";
                    else
                        cout<<"does not exist";
    return 0;
}
