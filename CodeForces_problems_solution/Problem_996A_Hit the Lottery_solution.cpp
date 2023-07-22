#include <iostream>
using namespace std;
int main()
{
    long long int a,b_100,b_20,b_10,b_5,b_1,total;
    cin>>a;
    b_100 = a/100;
    b_20 = (a%100)/20;
    b_10 = ((a%100)%20)/10;
    b_5 = (((a%100)%20)%10)/5;
    b_1 = (((a%100)%20)%10)%5;
    total = b_100+b_20+b_10+b_5+b_1;
    cout<<total<<endl;
    return 0;
}
