#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a,c;
    int b;
    cin >>a;
    b=int(a);
    c=a-b;
    if(c==0)
    {
        cout<<"int "<<b<<"\n";
    }
    else
    {
        cout<<"float "<<b<<" ";
        std::cout << std::fixed << std::setprecision(3) << c<<"\n";
    }
    return 0;
}




