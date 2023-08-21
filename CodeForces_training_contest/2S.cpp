#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long a,b,c,i,j,sum=0;
  cin>>a;
  for(i=1;i<=a;i++)
  {
      cin>>b >>c;
      sum = 0;
      if(b<c)
      {
          if(b%2==0&&c%2==0)
          {
              for(j=b;j<=c;j++)
               {
               if(j%2!=0)
               {
                   sum+=j;
               }
               }
          }
          else if(b%2!=0&&c%2!=0)
          {
              for(j=b+1;j<=c-1;j++)
            {
               if(j%2!=0)
               {
                   sum+=j;
               }
            }
          }
          else if(b%2!=0&&c%2==0)
          {
              for(j=b+1;j<=c;j++)
            {
               if(j%2!=0)
               {
                   sum+=j;
               }
            }
          }
          else if(b%2==0&&c%2!=0)
          {
              for(j=b;j<=c-1;j++)
            {
               if(j%2!=0)
               {
                   sum+=j;
               }
            }
          }

      }
      else if(b>=c)
      {
          if(b%2==0&&c%2==0)
          {
              for(j=c;j<=b;j++)
               {
               if(j%2!=0)
               {
                   sum+=j;
               }
               }
          }
          else if(b%2!=0&&c%2!=0)
          {
              for(j=c+1;j<=b-1;j++)
            {
               if(j%2!=0)
               {
                   sum+=j;
               }
            }
          }
          else if(b%2!=0&&c%2==0)
          {
              for(j=c;j<=b-1;j++)
            {
               if(j%2!=0)
               {
                   sum+=j;
               }
            }
          }
          else if(b%2==0&&c%2!=0)
          {
              for(j=c+1;j<=b;j++)
            {
               if(j%2!=0)
               {
                   sum+=j;
               }
            }
          }

      }
      cout<<sum<<'\n';

  }
  return 0;
}

