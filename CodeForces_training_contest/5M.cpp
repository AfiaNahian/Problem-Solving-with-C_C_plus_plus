#include <iostream>
using namespace std;
int countDistinct(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
                {
                    break;
                }
        }
        if (i == j)
           {
               res++;
           }
    }
    return res;
}
int main()
{
    int arr[10000],n;
    cin>>n;
    if(n==0)
    {
        cout<<n;
    }
    else
    {
        for(int k=0;k<n;k++)
        {
          cin>>arr[k];
        }
        cout << countDistinct(arr, n);
    }
    return 0;
}
