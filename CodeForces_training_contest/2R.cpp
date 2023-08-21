#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    long long int i,j,t,a,b,c=0;
    while(1)
    {
        cin>>a>>b;
        c=0;
        if(a<=0 || b<=0)
        {
            break;
        }
        else
        {
            if(a<b)
            {
                for(i=a;i<=b;i++)
                {
                    cout<<i<<" ";
                    c+=i;
                }
                cout<<"sum ="<<c;
            }
            else
            {
                for(i=b;i<=a;i++)
                {
                    cout<<i<<" ";
                    c+=i;
                }
                cout<<"sum ="<<c;

            }
            cout<<endl;
        }
    }
    return 0;
}
