#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    long long a,b,c,i,j=0;
    int x[10000],y[10000];
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>x[i];
    }
    for(i=0;i<a;i++)
    {
           if(x[i]<=10)
           {
             y[j]=x[i];
             cout<<"A["<<i<<']'<<" = "<<y[j]<<'\n';
             j++;
           }
    }
    return 0;
}

