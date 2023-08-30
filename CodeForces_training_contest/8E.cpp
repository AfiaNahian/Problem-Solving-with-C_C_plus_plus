#include <iostream>
using namespace std;
int main()
{
    long long a,b,c,d,e=0,i;
    cin >>a;
    for(i=1;i<=a;i++)
    {
        cin>>b>>c;
        if((c-b)>=2)
        {
            e++;
        }
    }
    cout<<e;
    return 0;
}




