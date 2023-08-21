#include <iostream>
using namespace std;
int main()
{
    float b,c;
    cin>>b >>c;
    if((b>0)&&(c>0))
    {
        cout<<"Q1\n";
    }
    else if((b<0)&&(c<0))
    {
        cout<<"Q3\n";
    }
    else if((b>0)&&(c<0))
    {
        cout<<"Q4\n";
    }
    else if((b<0)&&(c>0))
    {
        cout<<"Q2\n";
    }
    else if((b==0)&&(c!=0))
    {
        cout<<"Eixo Y\n";
    }
    else if((c==0)&&(b!=0))
    {
        cout<<"Eixo X\n";
    }
    else if((b==0)&&(c==0))
    {
        cout<<"Origem\n";
    }
    return 0;
}
