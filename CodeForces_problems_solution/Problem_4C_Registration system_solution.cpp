#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;int t,i;
    map <string,int> reg_sys;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s;
        if(reg_sys[s]==0)
        {
            cout<<"OK"<<endl;
            reg_sys[s]++;
        }
        else
        {
            cout<<s<<reg_sys[s]<<endl;
            reg_sys[s]++;
        }
    }
    return 0;
}

