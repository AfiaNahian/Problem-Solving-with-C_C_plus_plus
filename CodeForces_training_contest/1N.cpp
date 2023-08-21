#include <iostream>
using namespace std;
int main()
{
    char a,d;
    int b,c;
    cin>>a;
    b=int(a);
    if((b>=65)&&(b<=90))
    {
        c=b+32;
        d=char(c);
        cout<<d<<"\n";
    }
    else if((b>=97)&&(b<=122))
    {
        c=b-32;
        d=char(c);
        cout<<d<<"\n";
    }
    return 0;
}

