#include <bits/stdc++.h>
using namespace std;
#define MAX 100
void printDigit(long long N)
{
    int arr[MAX];
    long long i = 0;
    long long j, r;
    if(N==0)
    {
        cout<<0;
    }
    while (N != 0)
    {
        r = N % 10;
        arr[i] = r;
        i++;
        N = N / 10;
    }
    for (j = i - 1; j > -1; j--)
    {
        printf("%d ", arr[j]);
    }
}
int main()
{
    long long a,b,i, N;
    cin>>a;
    for(i=1;i<=a;i++)
    {
          cin>>N;
          printDigit(N);
          cout<<'\n';
    }
    return 0;
}
