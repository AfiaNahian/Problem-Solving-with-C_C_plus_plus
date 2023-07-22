#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],b[1000],m,i,j;
    cin>>m;
    int c=0;
    for(i=0;i<m;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
