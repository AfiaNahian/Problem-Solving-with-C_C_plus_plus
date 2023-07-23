#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j;
    cin>>a>>b;
    for(i=1;i<=a;i++)
    {
        if(i%4==2)
        {
            for(j=1;j<b;j++)
            {
                cout<<".";
            }
            cout<<"#";
        }
        else if(i%4==0)
        {
            cout<<"#";
            for(j=1;j<b;j++)
            {
                cout<<".";
            }
        }
        else
        {
            for(j=1;j<=b;j++)
            {
                cout<<"#";
            }
        }
        cout<<endl;
    }
    return 0;
}
