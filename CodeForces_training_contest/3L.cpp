#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tc,n,i,mx,x,j;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int a[n+2];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<' ';
            mx = a[i];
            for(j=i+1;j<n;j++)
            {
                mx = max(mx,a[j]);
                cout<<mx<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}
