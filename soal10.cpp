#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cin>>a;
    if(a<=12)
    cout<<a<<endl;

    if (a<6)
        cout<<"31 day";
        if (a>=6&&a<12)
            cout<<"30 day";
                else if(a==12)   
             cout<<"29 day";
                    else
                cout<<"does not exist";
        
    



    return 0;
}
