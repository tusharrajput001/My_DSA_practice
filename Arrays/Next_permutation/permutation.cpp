
#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &nums)
{
    int n = nums.size();
    // Find the break point
    int ind = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            ind = i;
            break;
        }
    }

    // if no break than it is increasing or decreasing than rev
    if (ind == -1)
    {
        reverse(nums.begin(), nums.end());
        return nums;
    }

    // After break point find the next greater and swap
    for (int i = n - 1; i > ind; i--)
    {
        if (nums[ind] < nums[i])
        {
            swap(nums[i], nums[ind]);
            break;
        }
    }

    // REVERSE AFTER IND + 1
    reverse(nums.begin() + ind + 1, nums.end());
    return nums;
}

int main()
{
    vector<int> nums = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = nextGreaterPermutation(nums);

    cout << "The next permutation is: [";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << "]n";
    return 0;
}