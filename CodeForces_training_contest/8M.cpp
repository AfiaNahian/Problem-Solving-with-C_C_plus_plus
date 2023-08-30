#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cin >>a>>b>>c;
    int x[]={a,b,c};
    sort(x,x+3);
    d=x[2]-x[1];

    e=x[1]-x[0];

    f=d+e;
    cout<<f<<endl;
    return 0;
}




