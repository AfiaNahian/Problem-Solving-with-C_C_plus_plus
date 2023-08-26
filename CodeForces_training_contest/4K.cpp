#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k,n,l1,l2,l;
    char str1[52],str2[52];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str1 >>str2;
        l1=strlen(str1);
        l2=strlen(str2);
        if(l1>=l2)
        {
            l=l1;
        }
        else
        {
            l=l2;
        }
        for(j=0;j<l;j++)
        {
            if(j<l1)
            {
                cout<<str1[j];
            }
            if(j<l2)
            {
                cout<<str2[j];
            }
        }
        cout<<"\n";
    }
    return 0;
}
