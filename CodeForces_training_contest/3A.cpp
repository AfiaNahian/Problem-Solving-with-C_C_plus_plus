#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    long long int x[100000],a,sum=0,i;
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>x[i];
        sum+=x[i];
    }
    if(sum<0)
    {
        sum=abs(sum);
    }
    cout<<sum<<endl;
    return 0;
}
