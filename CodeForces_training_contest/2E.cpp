#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,i;
  long long x,y,z, max_num=0;
  cin>>a;
  for(i=0;i<a;i++)
  {
      cin>>x;
      if(x>=max_num)
      {
          max_num=x;
      }
  }
  cout<<max_num<<"\n";
  return 0;
}



