#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,e,police=0,untreat=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>e;
        if(e>0)
        {
            police+=e;
        }
        else
        {
            if(police<1)
            {
                untreat++;
            }
            else
            {
                police--;
            }
        }
    }
    cout<<untreat<<endl;
    return 0;
}

