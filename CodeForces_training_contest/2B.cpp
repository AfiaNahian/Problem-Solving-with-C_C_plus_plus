#include <iostream>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    if(a==1)
    {
        cout<<-1;
    }
    for(i=1;i<=a;i++)
    {
       if(i%2==0)
       {
           cout<<i<<'\n';
       }
    }
    return 0;
}

