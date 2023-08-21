#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,f,g;
    cin>>a >>b >>c >>d;
    a=a%100;b=b%100;c=c%100;d=d%100;
    e=a*b*c*d;
    f=e%10;
    e=e/10;
    g=e%10;
    cout<<g<<f;
    return 0;
}
