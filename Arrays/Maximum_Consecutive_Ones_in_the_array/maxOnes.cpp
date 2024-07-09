#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &arr)
    {
        int cnt = 0;
        int maxi = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                cnt++;
            }

            else
            {
                cnt = 0;
            }

            maxi = max(cnt, maxi);
        }

        return maxi;
    }
};

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    Solution obj;
    int ans = obj.findMaxConsecutiveOnes(nums);
    cout << "The maximum  consecutive 1's are " << ans;
    return 0;
}