#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
    long long int i,j,t,a=0,b;
    cin>>t;
    b=sqrt(t);
    if(t==1 || t==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(i=2;i<b+1;i++)
        {
            if(t%i==0)
            {
                a=1;
                break;
            }
        }
        if(a==1)
        {
             cout<<"NO"<<endl;
        }
        else
        {
             cout<<"YES"<<endl;
        }
    }

    return 0;
}
