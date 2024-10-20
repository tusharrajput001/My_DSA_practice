#include <bits/stdc++.h>
using namespace std;
int myAtoi(string s)
{
    int i = 0;
    int n = s.size();

    // Step 1: Ignore leading whitespaces
    while (i < n && s[i] == ' ')
    {
        i++;
    }

    // Step 2: Handle optional sign
    bool neg = false;
    if (i < n && (s[i] == '-' || s[i] == '+'))
    {
        if (s[i] == '-')
            neg = true;
        i++;
    }

    // Step 3: Convert number and avoid overflow/underflow
    long ans = 0;
    while (i < n && s[i] >= '0' && s[i] <= '9')
    {
        int dig = s[i] - '0';
        ans = ans * 10 + dig;

        // Handle overflow/underflow
        if (neg && -ans < INT_MIN)
            return INT_MIN;
        if (!neg && ans > INT_MAX)
            return INT_MAX;

        i++;
    }

    return neg ? -ans : ans;
}

int main()
{
    int atoi = myAtoi("-40A0s");
    cout << atoi;
    return 0;
}