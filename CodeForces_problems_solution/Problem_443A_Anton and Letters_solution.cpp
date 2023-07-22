#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int i,c,a[26]={0},p,count=0;
    string s;
    getline(cin,s);
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='{' || s[i]==',' || s[i]=='}' || isspace(s[i]))
        {
            continue;
        }
        else
        {
            c=s[i]-97;
            a[c]=1;
        }
    }
    for(i=0;i<26;i++)
    {
        if(a[i]==1)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
