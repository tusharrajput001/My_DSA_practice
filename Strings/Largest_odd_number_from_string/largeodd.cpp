#include <bits/stdc++.h>
using namespace std;

string LargestSubstr(string s)
{
    // len of string
    int n = s.length() - 1;
    // check from last words in string
    for (int i = n; i >= 0; i--)
    {   
        // convert to ASCII value and check if it is odd and then return 
        if ((s[i] - '0') % 2 != 0)
        {
            return s.substr(0, i + 1);
        }
    }

    return "";
}

int main()
{
    string s = "31392";
    string res = LargestSubstr(s);
    cout << res;
}