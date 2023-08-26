#include <bits/stdc++.h>
#include <cmath>
using namespace std;
long long to_power(long long a,long long i);
int main()
{
    long long i,p,a,n,power=1,temp,sum=0;
    cin>>a >>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
           power=to_power(a,i);
           sum+=power;
        }
    }
    cout<<sum;
    return 0;
}
long long to_power(long long a,long long i)
{
    long long g=1,j;
    for( j=1;j<=i;j++)
    {
        g*=a;
    }
    return g;
}
