// ----------- BRUTE FORCE ---------------

// VARIANT 1 (YES OR NO IN TWO SUM PROBLEM)

// #include <bits/stdc++.h>
// using namespace std;

// string twoSum(int n, vector<int> &arr, int target)
// {

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 return "YES";
//             }
//         }
//     }

//     return "NO";
// }

// int main()
// {
//     int n = 5;
//     vector<int> arr = {2, 6, 5, 8, 11};
//     int target = 14;
//     string ans = twoSum(n, arr, target);
//     cout << "This is the answer for variant 1: " << ans << endl;
//     return 0;
// }

// --------- BETTER APPROACH ----------
// VARIANT 1 (YES OR NO IN TWO SUM PROBLEM)

// #include <bits/stdc++.h>
// using namespace std;

// string twoSum(int n, vector<int> &arr, int target) {\
//     unordered_map<int, int> mpp;
//     for (int i = 0; i < n; i++)
//     {
//         int num = arr[i];
//         int moreNeeded = target - num;
//         if(mpp.find(moreNeeded) != mpp.end() ){
//             return "YES";
//         }
//         mpp[num] = i;
//      }
//     return "NO";

// }

// int main()
// {
//     int n = 5;
//     vector<int> arr = {2, 6, 5, 8, 11};
//     int target = 14;
//     string ans = twoSum(n, arr, target);
//     cout << "This is the answer for variant 1: " << ans << endl;
//     return 0;
// }

// ------------- OPTIMAL APPROACH ------------
// VARIANT 1 (YES OR NO IN TWO SUM PROBLEM)

#include <bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;

    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            return "YES";
        }
        else if (sum < target)
            left++;
        else
            right--;
    }
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}