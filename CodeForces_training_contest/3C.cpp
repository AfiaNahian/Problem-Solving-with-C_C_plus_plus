#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long a,b,t,i;
  int x[10000];
  cin>>t;
  for(i=0;i<t;i++)
  {
      cin>>x[i];
  }
  for(i=0;i<t;i++)
  {
     if(x[i]==0)
     {
         x[i]=0;
     }
     else if(x[i]>0)
     {
         x[i]=1;
     }
     else
     {
         x[i]=2;
     }
  }
  for(i=0;i<t;i++)
  {
      cout<<x[i]<<" ";
  }
  return 0;
}


