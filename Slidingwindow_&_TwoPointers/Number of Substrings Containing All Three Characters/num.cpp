#include <bits/stdc++.h>
using namespace std;

int numberOfSubstrings(string s)
{
    int LastSeen[3] = {-1, -1, -1};
    int cnt = 0;

    for (int i = 0; i < s.length(); i++)
    {
        LastSeen[s[i] - 'a'] = i;

        if (LastSeen[0] != -1 && LastSeen[1] != -1 && LastSeen[2] != -1)
        {
            cnt += 1 + min({LastSeen[0], LastSeen[1], LastSeen[2]});
        }
    }

    return cnt;
}

int main()
{
    string s = "bbacba";
    int nu = numberOfSubstrings(s);
    cout << nu << endl;
    return 0;
}