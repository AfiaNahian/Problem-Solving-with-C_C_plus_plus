#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,i;
    int c[1000],j;
    char x;
    cin>>x;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>c[i];
    }
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=c[i];j++)
        {
            cout<<x;
        }
        cout<<"\n";
    }
    return 0;
}

