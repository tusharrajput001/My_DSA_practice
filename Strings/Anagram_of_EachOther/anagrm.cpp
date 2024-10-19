#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
    unordered_map<char, int> cnt;

    for (auto x : s)
    {
        cnt[x]++;
    }

    for (auto x : t)
    {
        cnt[x]--;
    }

    for (auto x : cnt)
    {
        if (x.second != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    bool res = isAnagram("anagram", "nagaram");
    if (res)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}
