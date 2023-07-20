#include <bits/stdc++.h>
using namespace std;
int main()
{
    int max_v,min_v,i,a,max_p,min_p,n,ans;
    cin>>n;
    max_v=0;
    min_v=101;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a>max_v)
        {
            max_v=a;
            max_p=i;
        }
        if(a<=min_v)
        {
            min_v=a;
            min_p=i;
        }
    }
    if(max_p>min_p)
    {
        ans=(max_p-1)+(n-min_p)-1;
    }
    else
    {
        ans=(max_p-1)+(n-min_p);
    }
    cout<<ans;
    return 0;
}
