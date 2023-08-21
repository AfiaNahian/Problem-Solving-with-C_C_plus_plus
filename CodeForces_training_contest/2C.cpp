#include <iostream>
using namespace std;
int main()
{
    int a,i;
    long long int x,n=0,p=0,e=0,o=0;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>x;
        if(x<0)
        {
            n++;
        }
        if(x>0)
        {
            p++;
        }
        if(x%2==0)
        {
            e++;
        }
        if(x%2!=0)
        {
            o++;
        }
    }
    cout<<"Even: "<<e<<"\n";
    cout<<"Odd: "<<o<<"\n";
    cout<<"Positive: "<<p<<"\n";
    cout<<"Negative: "<<n<<"\n";
    return 0;
}

