#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    long long x[10000],sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=x[i];
    }
    cout<<sum;
    return 0;
}
