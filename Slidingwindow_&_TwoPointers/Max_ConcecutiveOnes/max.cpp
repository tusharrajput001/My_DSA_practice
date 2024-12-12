#include <bits/stdc++.h>
using namespace std;

int longestOnes(vector<int> &nums, int k)
{
    int l = 0, r = 0, maxLen = 0, zeros = 0;
    while (r < nums.size())
    {
        if (nums[r] == 0)
            zeros++;

        // if zeros are > k
        if (zeros > k)
        {
            if (nums[l] == 0)
                zeros--;
            l++;
        }

        // if zeros are in limit of k

        if (zeros <= k)
        {
            int len = r - l + 1;
            maxLen = max(maxLen, len);
        }
        r++;
    }
    return maxLen;
}

int main()
{
    vector<int> nums = {1, 0, 1, 0, 1, 1, 1, 0, 0, 1};
    int k = 2;
    int MaxLen = longestOnes(nums, k);
    cout << "Max Concecutive with k reps can be " << " : " << MaxLen;
}