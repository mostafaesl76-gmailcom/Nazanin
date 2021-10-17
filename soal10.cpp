#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    while(1){
	cout<<"enter your month number: ";
	cin>>a;
    if (a>=1&&a<=6)
       cout<<"31 day"<<endl;
       else if (a>6&&a<12)
            cout<<"30 day"<<endl;
                else if(a==12)   
                    cout<<"29 day"<<endl;
                    else
                        cout<<"does not exist"<<endl;
						}
    return 0;
}
