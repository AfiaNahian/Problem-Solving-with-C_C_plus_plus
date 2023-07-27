#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,l;
    char s[1000];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>s;
        l = strlen(s);
        for(j=0;j<l-1;j+=2)
        {
            cout<<s[j];
        }
        cout<<s[l-1]<<endl;
    }
    return 0;
}
