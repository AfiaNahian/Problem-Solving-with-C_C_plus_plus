#include <iostream>
using namespace std;
int main()
{
    char a;
    int b,c;
    cin>>b >>a >>c;
    if(b>c)
    {
        if(a=='>')
        {
            cout<<"Right\n";
        }
        else{
            cout<<"Wrong\n";
        }
    }
    else if(b<c)
    {
        if(a=='<')
        {
            cout<<"Right\n";
        }
        else{
            cout<<"Wrong\n";
        }
    }
    else if(b==c)
    {
         if(a=='=')
        {
            cout<<"Right\n";
        }
        else{
            cout<<"Wrong\n";
        }
    }
    return 0;
}


