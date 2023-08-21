#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double pi=3.141592653,a,b;
    cin>>a;
    b=pi*a*a;
    std::cout << std::fixed;
    std::cout << std::setprecision(9);
    std::cout << b;
    return 0;
}
