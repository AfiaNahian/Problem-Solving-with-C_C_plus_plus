#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a,b;
    int c,d,e;
    cin>>a >>b;
    c=floor(a/b);
    d=ceil(a/b);
    e=round(a/b);
    cout<<"floor "<<a<<" / "<<b<<" = "<<c<<'\n';
    cout<<"ceil "<<a<<" / "<<b<<" = "<<d<<'\n';
    cout<<"round "<<a<<" / "<<b<<" = "<<e<<'\n';
    return 0;
}


