#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int i,flag=0;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i+=2;
            if(flag!=0)
            {
                cout<<' ';
            }
            continue;
        }
        else
        {
                flag=1;
                cout<<s[i];
        }
    }
    return 0;
}
