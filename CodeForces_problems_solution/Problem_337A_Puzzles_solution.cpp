#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,lv;
    cin>>n>>m;
    int a[m];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    if(m==n)
    {
        lv = a[n-1]-a[0];
    }
    else
    {
       for(i=n;i<=m;i++)
        {
            if((a[i-1]-a[i-n])<lv)
            {
                lv=(a[i-1]-a[i-n]);
            }
        }
    }
    cout<<lv<<endl;
    return 0;
}

