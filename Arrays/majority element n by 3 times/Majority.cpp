// BRUTE FORCE

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> majorityElement(vector<int> v)
// {
//     int n = v.size();

//     vector<int> ls;

//     for (int i = 0; i < n; i++)
//     {
//         int cnt = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (v[j] == v[i])
//             {
//                 cnt++;
//             }
//         }

//         if (cnt > (n / 3))
//         {
//             ls.push_back(v[i]);
//         }

//         if (ls.size() == 2)
//             break;
//     }

//     return ls;
// }

// int main()
// {
//     vector<int> arr = {11, 33, 33, 11, 33, 11};
//     vector<int> ans = majorityElement(arr);
//     cout << "The majority elements are: ";
//     for (auto it : ans)
//         cout << it << " ";
//     cout << "\n";
//     return 0;
// }

// Better Approach

#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v)
{
    int n = v.size();
    vector<int> ls;
    map<int, int> mpp;

    int mini = (int)(n / 3) + 1;
    for (int i = 0; i < n; i++)
    {
        mpp[v[i]]++;
        if (mpp[v[i]] == mini)
        {
            ls.push_back(v[i]);
        }

        if (ls.size() == 2)
            break;
    }

    return ls;
}

int main()
{
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans = majorityElement(arr);
    cout << "The majority elements are: ";
    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
    return 0;
}



// Using Moore's voting algo 
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt1 = 0 , cnt2 = 0;
        int el1 = 0, el2 = 0;

        // Extended Moore's voting algorithm
        for(int i=0; i<n; i++){
            if(cnt1 == 0 && nums[i]!= el2){
                cnt1 = 1;
                el1 = nums[i];
            }
            if(cnt2 == 0 && nums[i] != el1){
                cnt2 = 1;
                el2 = nums[i];
            }
            else if(nums[i] == el1){
             cnt1++;
            }
            else if(nums[i] == el2){
             cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }

        //list to store ans
        vector<int> ls;
        int threshold = n / 3;

        cnt1 = 0, cnt2 = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == el1)cnt1++;
            if(nums[i] == el2)cnt2++;
        }


        if(cnt1 > threshold){
        ls.push_back(el1);
        }

        if(cnt2 > threshold){
         ls.push_back(el2);
        }

        return ls;
    }
};