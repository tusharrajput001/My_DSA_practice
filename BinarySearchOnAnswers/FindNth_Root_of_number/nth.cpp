#include <bits/stdc++.h>
using namespace std;

int ChkAv(int mid, int n, int m)
{
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * mid;
        if (ans > m)
            return 2; // exceeded the range
    }
    if (ans == m)
        return 1; // we found it
    return 0;     // below the range
}

int NthRoot(int n, int m)
{
    int low = 1, high = m;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int midN = ChkAv(mid, n, m);
        if (midN == 1)  // FOUND
            return mid;
        else if (midN == 2)  // EXCEED THE ELEMENT
            high = mid - 1;
        else                  // LESS RANGE FOUND 
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int n = 3, m = 27;
    int ans = NthRoot(n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}