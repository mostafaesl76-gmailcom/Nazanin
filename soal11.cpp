#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char x;
    cout<<"enter your charachter :";
    cin>>x;
    if (x=='a'||x=='e'||x=='o'||x=='u'||x=='i'||x=='A'||x=='E'||x=='o'||x=='U'||x=='I')   
        cout<<"seda dar";
        else if(x>='a'&&x<='z'||x>='A'&& x<='Z')
                cout<<"bi seda"<<endl;
                 else if (x>='0' && x<='9')
                 cout<<"ragham";
                    else 
                        cout<<"sayer";           
                 
    return 0;
}
