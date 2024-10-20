#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s)
{
    int n = s.length();
    int cnt = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else if (s[i] == ')')
        {
            cnt--;
            ans = max(ans, cnt);
        }
        else
        {
            continue;
        }
    }
    return ans;
}
int main()
{
    int depth = maxDepth("(1+(2*3)+((8)/4))+1");
    cout << depth;
    return 0;
}