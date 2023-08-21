#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a >>b;
    if((a-b)>=2 || (b-a)>=2)
    {
        cout<<"NO"<<endl;
    }
    else if(a==0 && b==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}






