// #include <bits/stdc++.h>
// using namespace std;

// int solve(int n, int key, vector<int> &arr)
// {
//     int low = 0, high = n - 1;
//     int ans = -1;
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             low = mid + 1;
//         }
//         else if (key < arr[mid])
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int n = 7;
//     int key = 13;
//     vector<int> v = {3, 4, 13, 13, 13, 20, 40};

//     // returning the last occurrence index if the element is present otherwise -1
//     cout << "The last occurace of element is : " << solve(n, key, v) << "\n";

//     return 0;
// }


