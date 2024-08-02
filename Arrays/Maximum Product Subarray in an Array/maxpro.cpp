// Brute force

// #include <bits/stdc++.h>
// using namespace std;

// int maxProductSubArray(vector<int> &arr)
// {
//     int n = arr.size();
//     int res = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int prod = 1;
//             for (int k = i; k <= j; k++){
//                 prod = prod * arr[k];
//             }
//             res = max(res, prod);
//         }
//     }
//     return res;
// }

// int main()
// {
//     vector<int> nums = {1, 2, -3, 0, -4, -5};
//     cout << "The maximum product subarray: " << maxProductSubArray(nums);
//     return 0;
// }

// // BETTER
// #include<bits/stdc++.h>
// using namespace std;

// int maxProductSubArray(vector<int>& arr) {
//     int n = arr.size();
//     int res = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         int p = arr[i];
//         for (int j = i+1; j < n; j++)
//         {
//             res = max(res, p);
//             p *= arr[j];
//         }
//         res = max(res,p);
//     }
//     return res;
// }

// int main() {
//     vector<int> nums = {1,2,-3,0,-4,-5};
//     cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
//     return 0;
// }

// OPTIMAL APPROACH

#include <bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int> &arr)
{
    int n = arr.size();
    int pre = 1, suff = 1;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (pre == 0)
            pre = 1;
        if (suff == 0)
            suff = 1;

        pre = pre * arr[i];
        suff *= arr[n - i - 1];
        ans = max(ans, max(pre, suff));
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, -3, 0, -4, -5};
    cout << "The maximum product subarray is: "
         << maxProductSubArray(arr) << "\n";
    return 0;
}
