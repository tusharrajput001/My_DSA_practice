#include <bits/stdc++.h>
using namespace std;
string Common(string s1, string s2)
{
    int n = min(s1.length(), s2.length());
    string sb;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == s2[i])
        {
            sb += s1[i];
        }
        else
        {
            break;
        }
    }
    return sb;
}

string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty())
        return ""; // Edge case: if the input vector is empty

    string res = strs[0];

    for (int i = 1; i < strs.size(); i++)
    {
        res = Common(res, strs[i]);
        if (res.empty())
            break; // Early exit if no common prefix
    }

    return res;
}

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    string res = longestCommonPrefix(strs);
    cout << "The longest common prefix is : " << res;
}