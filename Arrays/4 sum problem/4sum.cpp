// BETTER APPROACH TC- O(N3 + log M)

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> fourSum(vector<int> &nums, int target)
// {
//     int n = nums.size();
//     // set list
//     set<vector<int>> st;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             // hashset
//             set<long long> hashset;
//             for (int k = j + 1; k < n; k++)
//             {
//                 long long sum = nums[i] + nums[j];
//                 sum += nums[k];
//                 // fourth find in arr
//                 long long fourth = target - (sum);
//                 // if fourth found in arr then sort and insert it into set
//                 if (hashset.find(fourth) != hashset.end())
//                 {
//                     vector<int> temp = {nums[i], nums[j], nums[k], (int)(fourth)};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }

//                 // insert k in hashset
//                 hashset.insert(nums[k]);
//             }
//         }
//     }

//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }

// int main()
// {
//     vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
//     int target = 9;
//     vector<vector<int>> ans = fourSum(nums, target);
//     cout << "The quadruplets are: \n";
//     for (auto it : ans)
//     {
//         cout << "[";
//         for (auto ele : it)
//         {
//             cout << ele << " ";
//         }
//         cout << "] ";
//     }
//     cout << "\n";
//     return 0;
// }

// OPTIMAL APPROACH
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    int n = nums.size();
    // list set
    vector<vector<int>> ans;
    // sort the whole arr
    sort(nums.begin(), nums.end());
    // loops
    for (int i = 0; i < n; i++)
    {
        // remove duplications
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            // remove duplications
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;
            // pointers
            int k = j + 1;
            int l = n - 1;
        
            while (k < l)
            {
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];

                if (sum == target)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while (k < l && nums[k] == nums[k - 1])
                        k++;
                    while (k < l && nums[l] == nums[l + 1])
                        l--;
                }
                else if (sum > target)
                {
                    l--;
                }
                else
                {
                    k++;
                }
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;
    vector<vector<int>> ans = fourSum(nums, target);
    cout << "The quadruplets are: \n";
    for (auto it : ans)
    {
        cout << "[";
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}
