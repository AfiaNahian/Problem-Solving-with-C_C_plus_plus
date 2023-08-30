#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string str;
    getline(cin,str);
    int len = str.length();
    for (int i = 0; i < len; i++)
	{
        for (int j = i+1; j < len; j++)
	    {
	        if(str[j]=='+')
	        {
	            continue;
	        }
	        else if(str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    cout<<str;
    return 0;
}
