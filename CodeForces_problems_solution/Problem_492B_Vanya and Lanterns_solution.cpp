#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,l,i,p,d;
    cin>>n>>l;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    p=l-a[n-1];
    d=2*max(a[0],p);
    for(i=1;i<n;i++)
    {
        d=max(d,(a[i]-a[i-1]));
    }
    cout<<fixed<<setprecision(9)<<(double)d/2<<endl;
    return 0;
}
