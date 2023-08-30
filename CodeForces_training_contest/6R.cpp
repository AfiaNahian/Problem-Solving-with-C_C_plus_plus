#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;
double distance(double x1,double y1,double x2,double y2)
{
    return sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2) * 1.0);
}
int main()
{
    double a,b,c,d,e;
    cin>>a >>b >>c >>d;
    e=distance(a,b,c,d);
    std::cout << std::fixed;
    std::cout << std::setprecision(9);
    std::cout << e;
    return 0;
}
