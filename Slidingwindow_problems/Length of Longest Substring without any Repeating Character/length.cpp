// Brute-force approach   TC- O(N2), SC=

#include <bits/stdc++.h>
using namespace std;

// int solve(string str)
// {
//     if (str.size() == 0)
//         return 0;

//     int MaxAns = INT_MIN;

//     for (int i = 0; i < str.length(); i++)
//     {
//         unordered_set<int> set;
//         for (int j = i; j < str.length(); j++)
//         {
//             if (set.find(str[j]) != set.end())
//             {
//                 MaxAns = max(MaxAns, j - i);
//                 break;
//             }

//             set.insert(str[j]);
//         }
//     }
//     return MaxAns;
// }

// int main()
// {
//     string str = "takeUforward";
//     cout << "The length of the longest substring without repeating characters is " << solve(str);
//     return 0;
// }

// Optimal Approach 1
// Sliding Window

int solve(string str)
{
    if (str.size() == 0)
    {
        return 0;
    }
    int maxans = INT_MIN;
    unordered_set<int> st;
    int l = 0, r = 0;

    for (int r = 0; r < str.length(); r++)
    {
        // if found the duplicate (Sliding window)
        if (st.find(str[r]) != st.end())
        {
            while (l < r && st.find(str[r]) != st.end())
            {
                st.erase(str[l]);
                l++;
            }
        }
        // else

        st.insert(str[r]);
        maxans = max(maxans, r - l + 1);
    }

    return maxans;
}

int main()
{
    string str = "takeUforward";
    cout << "The length of the longest substring without repeating characters is " << solve(str);
    return 0;
}
