#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long a,b,c,d,e;
  char x,y;
  cin>>a >>x >>b >>y >>c;
  if(x=='+')
  {
      if(a+b==c)
      {
          cout<<"Yes"<<'\n';
      }
      else
      {
          c=a+b;
          cout<<c<<'\n';
      }
  }
  else if(x=='-')
  {
      if(a-b==c)
      {
          cout<<"Yes"<<'\n';
      }
      else
      {
          c=a-b;
          cout<<c<<'\n';
      }
  }
  else if(x=='*')
  {
      if(a*b==c)
      {
          cout<<"Yes"<<'\n';
      }
      else
      {
          c=a*b;
          cout<<c<<'\n';
      }
  }
  else if(x=='/')
  {
      if(a/b==c)
      {
          cout<<"Yes"<<'\n';
      }
      else
      {
          c=a/b;
          cout<<c<<'\n';
      }
  }
  return 0;
}


