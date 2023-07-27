
#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,d=0,e=0,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            d++;
        }
        else if(a<b)
        {
            e++;
        }
    }
    if(d>e)
    {
        cout<<"Mishka"<<"\n";
    }
    else if(d<e)
    {
         cout<<"Chris"<<"\n";
    }
    else
    {
         cout<<"Friendship is magic!^^"<<"\n";
    }
    return 0;
}
