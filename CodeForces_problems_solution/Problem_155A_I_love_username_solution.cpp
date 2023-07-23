#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=0,n,best,worst;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    best = a[0];
    worst = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<worst)
        {
            worst=a[i];
            c++;
        }
        else if(a[i]>best)
        {
            best=a[i];
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
