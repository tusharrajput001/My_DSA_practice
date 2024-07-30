
#include <bits/stdc++.h>
using namespace std;

// optimal
int maxLen(int A[], int n)
{
    // Your code here
    unordered_map<int, int> mpp;
    int maxi = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        if (sum == 0)
        {
            maxi = i + 1;
        }
        else
        {
            if (mpp.find(sum) != mpp.end())
            {
                maxi = max(maxi, i - mpp[sum]);
            }
            else
            {
                mpp[sum] = i;
            }
        }
    }

    return maxi;
}

// brute

int solve(vector<int> &a)
{
    int maxlen = 0;
    unordered_map<int, int> sumIndexMap;
    int sum = 0;
    int n = a.size();

    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if (sum == 0)
        {
            maxlen = i + 1;
        }
        else if (sumIndexMap.find(sum) != sumIndexMap.end())
        {
            maxlen = max(maxlen, i - sumIndexMap[sum]);
        }
        else
        {
            sumIndexMap[sum] = i;
        }
    }
    return maxlen;
}

int main()
{
    vector<int> a = {9, -3, 3, -1, 6, -5};
    cout << solve(a) << endl;

    return 0;
}
