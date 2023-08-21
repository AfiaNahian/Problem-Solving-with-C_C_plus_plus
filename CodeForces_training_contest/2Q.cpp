#include<bits/stdc++.h>
using namespace std;
int main()
{
  unsigned long long a,b,t,i;
  cin>>t;
  for(i=1;i<=t;i++)
  {
      cin>>a;
      if(a==0)
      {
          cout<<a;
      }
      while(a!=0)
      {
          b=a%10;
          cout<<b<<' ';
          a=a/10;
      }
      cout<<'\n';
  }
  return 0;
}

