#include <iostream>
#include <string>
using namespace std;
int main ()
{
    char x[1000][1000];
    int a,b,c,d,e,i,j;
    cin>>a>>b;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            if(i%2!=0)
            {
                x[i][j]='#';
            }
            if(i%2==0)
            {
                x[i][j]='.';
            }
            if((i%2==0)&& (i%4!=0)&&(j==b))
            {
                x[i][j]='#';
            }
            if((i%2==0)&& (i%4==0) && (j==1))
            {
                x[i][j]='#';
            }
        }
    }
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            cout<<x[i][j];
        }
        cout<<endl;
    }

    return 0;
}
