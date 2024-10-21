#include <bits/stdc++.h>
using namespace std;

int beautySum(string s)
{
    int ans = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        map<char, int> mpp;
        for (int j = i; j < n; j++)
        {
            mpp[s[j]]++;
            int least_freq = INT_MAX;
            int most_freq = INT_MIN;
            for (auto it : mpp)
            {
                least_freq = min(least_freq, it.second);
                most_freq = max(most_freq, it.second);
            }
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
