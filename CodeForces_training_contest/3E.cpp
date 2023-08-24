#include <bits/stdc++.h>
using namespace std;
int main()
{
   int ar[50000];
   long long int a,b,x,y,i,j;
   cin>>a;
   for(i=0;i<a;i++)
   {
       cin>>ar[i];
   }
   x=ar[0];
   y=0;
   for(j=0;j<a;j++)
   {
         if(ar[j]<x)
         {
             x=ar[j];
             y=j+1;
         }
   }
   if(y==0)
   {
       y++;
   }
   cout<<x<<" "<<y<<endl;
   return 0;
}
 
