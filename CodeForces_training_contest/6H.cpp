#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,b;
   long long int g,l,rem,c,d;
   cin>>a>>b;
   if (a>b)
   {
       c=a;
       d=b;
   }
   else
    {
        c=b;
        d=a;
    }
    rem = c % d;
    while(rem != 0)
    {
        c=d;
        d=rem;
        rem=c%d;
    }
    g=d;
    l=a/g*b;
    cout<<g<<' '<<l;
    return 0;
}
