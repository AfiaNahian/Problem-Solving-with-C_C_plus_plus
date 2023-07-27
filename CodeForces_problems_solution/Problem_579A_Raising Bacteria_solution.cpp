#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,sum=0;
    cin>>t;
    while(t!=0)
    {
        if(t%2==1)
        {
            sum+=1;
        }
        t=t/2;
    }
    cout<<sum<<endl;
    return 0;
}
