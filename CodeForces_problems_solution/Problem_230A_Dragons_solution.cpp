#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,i,x1,y1,flag=0;
    pair <int,int> dragon_point[9000];
    cin>>s>>n;
    for(i=0;i<n;i++)
    {
        cin>>dragon_point[i].first>>dragon_point[i].second;
    }
    sort(dragon_point,dragon_point+n);
    for(i=0;i<n;i++)
    {
        if(s<=dragon_point[i].first)
        {
            flag=1;
            break;
        }
        else
        {
            s+=dragon_point[i].second;
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
