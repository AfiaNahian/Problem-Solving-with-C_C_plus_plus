#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,p=0,q=1,r;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      cout<<p<<' ';
      r=p+q;
      p=q;
      q=r;
  }
  return 0;
}



