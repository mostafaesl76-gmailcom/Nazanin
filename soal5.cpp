#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;
    cout<< "enter a";
    cin>>a;
    
    cout<< "enter b";
    cin>>b;

      cout<< "enter c";
      cin>> c;
      
    if (a==b&&b==c)
        cout<<"motesavi asla";
        else 
            if (a==b || b==c || c==a)
            cout<<"motasavi saqine";
             else
                cout<<"mokhtalef azla";
  
   
    
    return 0;
}


