#include<bits/stdc++.h>
using namespace std;
int main(){

    char str[1000000];
    int i = 0,qut = 0,p,j;
    while(gets(str))
    {
        p=strlen(str);
        for(j=0;j<p;j++)
        {
            if(str[j] == '\"')
            {
                qut++;
                if(qut%2 == 0)
                {
                    cout << "\'" << "\'";
                }
                else
                {
                    cout << "`" << "`";
                }
            }
            else
            {
                cout << str[j];
            }
        }
        cout << endl;
    }
    return 0;
}
