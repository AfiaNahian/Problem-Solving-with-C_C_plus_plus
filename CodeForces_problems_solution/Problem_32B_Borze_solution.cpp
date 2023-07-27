#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k,n,l1,l2,l;
    char s[300];
    cin>>s;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='.')
        {
            cout<<'0';
        }
        if(s[i]=='-')
        {
            if(s[i+1]=='.')
            {
                cout<<'1';
            }
            else
            {
                cout<<'2';
            }
            i++;
        }
    }
    return 0;
}
