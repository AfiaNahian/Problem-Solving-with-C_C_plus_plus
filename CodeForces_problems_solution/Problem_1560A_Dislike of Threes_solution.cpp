#include <iostream>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int num=0;
        cin>>n;
        for(j=1;j<=1666;j++)
        {
            if(j%3==0 || j%10==3)
            {
                continue;
            }
            else
            {
                num++;
            }
            if(num==n)
            {
                break;
            }
        }
        cout<<j<<endl;
    }
    return 0;
}
