#include <bits/stdc++.h>
using namespace std;

int atMost(vector<int> &nums, int goal)
{
    if (goal < 0)
        return 0;
    int l = 0, r = 0, count = 0, sum = 0;

    while (r < nums.size())
    {
        sum += nums[r];
        while (sum > goal)
        {
            sum -= nums[l];
            l++;
        }

        count += r - l + 1;
        r++;
    }
    return count;
}
int numSubarraysWithSum(vector<int> &nums, int goal)
{
    return atMost(nums, goal) - atMost(nums, goal - 1);
}
int main()
{
    vector<int> arr = {1, 0, 1, 0, 1};
    int goal = 2;
    int n = numSubarraysWithSum(arr, goal);
    cout << n;
    return 0;
}