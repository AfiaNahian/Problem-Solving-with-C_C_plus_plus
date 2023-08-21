#include <iostream>
using namespace std;
int main()
{
    long long a,b=0,c,d=0,e;
    cin >>a;
    while(a>=30)
    {
        b=a/365;
        //cout<<b<<'\n';
        c=a%365;
        //cout<<c<<'\n';
        d=c/30;
        //cout<<d<<'\n';
        a=c%30;
        //cout<<a<<'\n';
    }
    cout<<b<<" years\n";
    cout<<d<<" months\n";
    cout<<a<<" days\n";
    return 0;
}



