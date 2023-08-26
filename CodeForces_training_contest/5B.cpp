#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<n;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            cout<<i;
            if(i==n)
            {
                break;
            }
            cout<<" ";
        }
    }
    return 0;
}
