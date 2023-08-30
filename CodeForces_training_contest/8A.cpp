#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,d,e,f,g,h,k;
  cin>>a;
  cin>>b;
  cin>>c;
  d=(a+b)*c;
  e=a*(b+c);
  f=a*b*c;
  g=a+b+c;
  h=a+(b*c);
  k=(a*b)+c;
  int x[]={d,e,f,g,h,k};
  int m=x[0];
  for(int i=0;i<5;i++)
  {
      if(x[i]>=m)
      {
          m=x[i];
      }
  }
  cout <<m;
  return 0;
}


