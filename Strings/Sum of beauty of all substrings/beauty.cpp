#include <bits/stdc++.h>
using namespace std;

int beautySum(string s)
{
    int ans = 0;
    int n = s.length();
    // nested loops for substrings generation
    for (int i = 0; i < n; i++)
    {
        map<char, int> mpp;  // map to store an char and its freq of presence
        for (int j = i; j < n; j++)
        {
            mpp[s[j]]++;  // store in map
            // let least freq & most freq
            int least_freq = INT_MAX;
            int most_freq = INT_MIN;
            // iterate map and get least freq and most freq from characters
            for (auto it : mpp)
            {
                least_freq = min(least_freq, it.second);
                most_freq = max(most_freq, it.second);
            }
            // find the difference of Most freq and least freq 
            ans += most_freq - least_freq;
        }
    }
    return ans;
}

int main()
{
    string str = "aabcb";
    int beauty = beautySum(str);

    cout << beauty << endl;
}
