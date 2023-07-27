#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,a,b,c,d,e;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        e=0;
        cin>>a>>b>>c>>d;
        if(b>a)
        {
            e++;
        }
        if(c>a)
        {
            e++;
        }
        if(d>a)
        {
            e++;
        }
        cout<<e<<endl;
    }
    return 0;
}

