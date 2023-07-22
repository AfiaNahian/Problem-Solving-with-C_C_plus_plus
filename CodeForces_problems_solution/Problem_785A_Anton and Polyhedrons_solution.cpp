#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int n,i,count=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        if(s == "Tetrahedron")
        {
            count+=4;
        }
        else if(s=="Cube")
        {
            count+=6;
        }
        else if(s=="Octahedron")
        {
            count+=8;
        }
        else if(s=="Dodecahedron")
        {
            count+=12;
        }
        else{
            count+=20;
        }
    }
    cout<<count<<endl;
    return 0;
}
