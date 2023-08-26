#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    string a;
    int b,i;
    getline(cin,a);
    b=a.size();
    for(i=0;i<b;i++)
    {
       if(a[i]=='\\')
       {
           break;
       }
       else
       {
          cout<<a[i];
       }
    }
    return 0;
}

