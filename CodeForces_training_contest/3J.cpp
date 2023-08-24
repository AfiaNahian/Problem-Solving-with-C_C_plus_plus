#include<iostream>
using namespace std;
long long frequency(int x[],long long a,long long c)
{
    long long count = 0;
    for (int i=0; i < a; i++)
       if (x[i] == c)
       {
          count++;
       }
    return count;
}
int main()
{
    long long a,b,c,i,j=0;
    int x[10000];
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>x[i];
    }
    c=x[0];
    for(i=0;i<a;i++)
    {
          if (c>x[i])
            {
                c=x[i];
            }
    }
    b=frequency(x,a,c);
    if(b%2==0)
    {
       cout<<"Unlucky\n";
    }
    else
    {
        cout<<"Lucky\n";
    }
    return 0;
}

