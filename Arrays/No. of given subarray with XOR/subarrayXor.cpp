// BRUTRFORCE APPROACH (TC -> O(N3), SC -> O(1))
// #include <bits/stdc++.h>
// using namespace std;

// int subarraysWithXorK(vector<int> arr, int k)
// {
//     int n = arr.size();
//     int cnt = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int xorr = 0;
//             for (int k = i; k < j; k++)
//             {
//                 xorr ^= arr[k];
//             }

//             if (xorr == k)
//                 cnt++;
//         }
//     }

//     return cnt;
// }

// int main()
// {
//     vector<int> a = {4, 2, 2, 6, 4};
//     int k = 6;
//     int ans = subarraysWithXorK(a, k);
//     cout << "The number of subarrays with XOR k is: "
//          << ans << "\n";
//     return 0;
// }

// BETTER APPROACH
// #include <bits/stdc++.h>
// using namespace std;

// int subarraysWithXorK(vector<int> a, int k)
// {
//     int n = a.size();
//     int cnt = 0;

//     for (int i = 0; i < n; i++)
//     {
//         int xorr = 0;
//         for (int j = i; j < n; j++)
//         {
//             xorr = xorr ^ a[j];

//             if (xorr == k)
//                 cnt++;
//         }
//     }

//     return cnt;
// }
// int main()
// {
//     vector<int> a = {4, 2, 2, 6, 4};
//     int k = 6;
//     int ans = subarraysWithXorK(a, k);
//     cout << "The number of subarrays with XOR k is: "
//          << ans << "\n";
//     return 0;
// }



