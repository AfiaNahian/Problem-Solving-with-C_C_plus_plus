#include <iostream>
using namespace std;
int main()
{
    long long a,b,c;
    long long p,q,r;
    cin >>a >>b >>c;
    if (a>b)
        {
          p=a;
          q=b;
        }
    else
        {
           p=b;
           q=a;
        }
    if(p>c)
    {
      r=p;
      if(q>c)
        {
         p=q;
         q=c;
       }
      else
        {
         p=c;
        }
    }
    else r=c;
    cout<<q<<'\n'<<p<<'\n'<<r<<"\n\n";
    cout<<a<<'\n'<<b<<'\n'<<c;
    return 0;
}



