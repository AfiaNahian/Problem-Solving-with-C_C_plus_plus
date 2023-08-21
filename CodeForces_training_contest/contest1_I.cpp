#include <iostream>
using namespace std;
int main()
{
    long long a,b,c,d,e;
    cin >>a;
    b=a/10;
    c=a%10;
    if(c==0)
    {
        cout<<"YES"<<endl;
    }
    else if((b%c==0)||(c%b==0))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}




