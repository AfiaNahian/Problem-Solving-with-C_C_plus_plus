#include <iostream>
using namespace std;
int main()
{
    long int a,b,c,d,e,f;
    cin >>a >> b >>c;
    if((a>=b)&&(a>=c))
    {
        e=a;
    }
    else if((b>=a)&&(b>=c))
    {
        e=b;
    }
    else if((c>=a)&&(c>=b))
    {
        e=c;
    }
    if((a<=b)&&(a<=c))
    {
        f=a;
    }
    else if((b<=a)&&(b<=c))
    {
        f=b;
    }
    else if((c<=a)&&(c<=b))
    {
        f=c;
    }
    cout<<f<<' '<<e<<"\n";
    return 0;
}



