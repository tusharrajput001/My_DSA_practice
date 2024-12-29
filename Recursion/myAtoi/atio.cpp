
#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s) {
    int n = s.size();
    int i = 0;
    int sign = 1;
    int ans = 0;

    // Ignore leading whitespaces
    while (i < n && s[i] == ' ') {
        i++;
    }

    // Handle optional sign
    if (i < n && (s[i] == '-' || s[i] == '+')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    // Convert string to number and check for overflow/underflow
    while (i < n && isdigit(s[i])) {
        int dig = s[i] - '0';

        // Check for overflow before updating ans
        if (ans > (INT_MAX - dig) / 10) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        ans = ans * 10 + dig;
        i++;
    }

    return ans * sign;
}

int main() {
    string s = "-1337c0d3";
    int ans = myAtoi(s);
    cout << ans << endl;
    return 0;
}
