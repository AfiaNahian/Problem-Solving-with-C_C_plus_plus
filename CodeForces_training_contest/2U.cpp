#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum_of_digit(long long int n)
{
	if (n == 0)
	return 0;
	return (n % 10 + sum_of_digit(n / 10));
}
int main()
{
    long long int a,b,c,d,i,p=0;
    cin>>a>>b>>c;
    for(i=1;i<=a;i++)
    {
        d=sum_of_digit(i);
        if(d>=b && d<=c)
        {
            p+=i;
        }
    }
    cout<<p;
    return 0;
}
