#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,t,c=0,i;
    cin>>a>>b;
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    for(i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            c=i;
        }
    }
    cout<<c;
    return 0;
}

