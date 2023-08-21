#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned long long int a,b,c,d,e;
    cin>>a >>b >>c;
    if((a%c)==0 && (b%c)!=0)
    {
        cout<<"Memo"<<endl;
    }
    else if((a%c)!=0 && (b%c)==0)
    {
        cout<<"Momo"<<endl;
    }
    else if((a%c)==0 && (b%c)==0)
    {
        cout<<"Both"<<endl;
    }
    else if((a%c)!=0 && (b%c)!=0)
    {
        cout<<"No One"<<endl;
    }
    return 0;
}





