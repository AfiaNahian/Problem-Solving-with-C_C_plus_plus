#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    long long int i,j,t,a,b=1;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a;
        b=1;
        if(a==0)
           {
              cout<<b<<endl;
           }
        else
            {
               for(j=1;j<=a;j++)
               {
                    b*=j;
               }
               cout<<b<<endl;
            }
    }
    return 0;
}
