#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    long long int x[100000],a,b,sum=0,i,j;
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>x[i];
    }
    cin>>b;
    for(j=0;j<a;j++)
    {
        if(x[j]==b)
        {
            cout<<j;
            break;
        }
    }
    if(j==a)
    {
        cout<<-1;
    }
    return 0;
}
