#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b,c;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if((a+b==c)||(b+c==a)||(c+a==b))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
