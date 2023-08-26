#include<bits/stdc++.h>
using namespace std;
int main()
{
    string b,a="hello";
    cin>>b;
    int i=0,j=0,c=0;
    while(i!=a.size())
    {
        if(a[i]!=b[j])
        {
             j++;
        }
        else if (a[i]==b[j])
        {
            i++;j++;c++;
        }
        if(j==b.size())
        {
            break;
        }
    }
    if(c==a.size())
    {
        cout<<"YES"<<endl;
    }
    else
    {
       cout<<"NO"<<endl;
    }
    return 0;
}
