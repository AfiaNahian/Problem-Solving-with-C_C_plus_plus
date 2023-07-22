#include <iostream>
using namespace std;
int main()
{
    int a,num[101],c[101]={0},i,count=0;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>num[i];
        if(num[i]%2==1)
        {
            c[i]=1;
        }
        count+=c[i];
    }
    if(count==1)
    {
        for(i=1;i<=a;i++)
        {
            if(c[i]==1)
            {
                cout<<i<<endl;
            }
        }
    }
    else
    {
        for(i=1;i<=a;i++)
        {
            if(c[i]==0)
            {
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
