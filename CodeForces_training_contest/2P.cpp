#include <iostream>
using namespace std;
int main()
{
    long long a,i,j;
    cin>>a;
    for(i=a;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}




