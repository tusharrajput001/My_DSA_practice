#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    unordered_map<char, char> mp1;
    unordered_map<char, char> mp2;

    int n = s.length();

    for (int i = 0; i < n; i++)
    {

        char ch1 = s[i];
        char ch2 = t[i];

        // if we already have ch1 in mp1 and it is not equal to ch2 which is mapped previousley OR
        // if we already have ch2 in mp2 and it is not equal to ch1 which is mapped previousley
        if (mp1.find(ch1) != mp1.end() && mp1[ch1] != ch2 || mp2.find(ch2) != mp2.end() && mp2[ch2] != ch1)
        {
            return false;
        }

        mp1[ch1] = ch2;
        mp2[ch2] = ch1;
    }

    return true;
}

int main()
{
    int res = isIsomorphic("egg", "add");
    return res;
}   
